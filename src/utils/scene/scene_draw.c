#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "constdef.h"
#include "planedef.h"
#include "scene.h"
#include "vec.h"
#include "ray.h"
#include "mat.h"

uint32_t	get_pixel(mlx_texture_t *tex, t_plane plane, t_vec intersect)
{
	t_vec norm = vec_div_scalar(vec_sub(intersect, plane.position), 10);
	if (plane.bearing == BEARING_EAST || plane.bearing == BEARING_WEST)
	{
		norm.x = norm.z;
		norm.z = 0;
	}
	// printf("%lu x % lu\n", (uint32_t)(norm.y * tex->height), (uint32_t)(norm.x * tex->width));
	uint32_t index = ((uint32_t)((1 - norm.y) * tex->height) * tex->width + (uint32_t)(norm.x * tex->width)) * tex->bytes_per_pixel;
	return (tex->pixels[index] << 24 | tex->pixels[index + 1] << 16 | tex->pixels[index + 2] << 8 | tex->pixels[index + 3]);
}

void	scene_draw(t_scene *scene)
{
	const double	fov = 75;
	double 			fov_dist;

	fov_dist = tan(PI * 0.5 * fov / 180.0);

	for (uint32_t ix = 0; ix < scene->size.x; ix++)
	{
		for (uint32_t iy = 0; iy < scene->size.y; iy++)
		{
			double x = (((ix + 0.5) / scene->size.x) * 2 - 1) * fov_dist * (scene->size.x / scene->size.y);
			double y = (1 - ((iy + 0.5) / scene->size.y) * 2) * fov_dist;

			t_vec direction = vec_rotate(vec_normalize(vec_create(x, y, 1)), scene->player.pitch, scene->player.yaw);
			t_ray ray = ray_create(scene->player.position, direction);

			scene->planes[0] = (t_plane){
				(t_vec){0, 0, 25},
				(t_vec){0, 0, -1},
				BEARING_SOUTH
			};
			scene->planes[1] = (t_plane){
				(t_vec){0, 0, 15},
				(t_vec){1, 0, 0},
				BEARING_EAST
			};

			mlx_put_pixel(scene->image, ix, iy, 0x000000ff);

			for (int i = 0; i < 2; i++)
			{
				t_vec intersect;
				if (ray_intersect(ray, scene->planes[i], &intersect))
					continue ;
				mlx_put_pixel(scene->image, ix, iy, get_pixel(scene->tex, scene->planes[i], intersect));
			}
		}
	}
}