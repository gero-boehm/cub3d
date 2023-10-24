#include "planedef.h"
#include "raydef.h"
#include "vec.h"

t_ray	ray_create(t_vec origin, t_vec direction)
{
	return ((t_ray){origin, direction});
}

int	ray_intersect(t_ray ray, t_plane plane, t_vec *intersect)
{
	double	denominator;
	double	d;
	double	t;

	denominator = vec_dot(plane.normal, ray.direction);
	if (denominator >= 0)
		return (1);
	d = vec_dot(plane.normal, plane.position);
	t = (d - vec_dot(plane.normal, ray.origin)) / denominator;
	if (t < 0)
		return (1);
	*intersect = vec_add(ray.origin, vec_mult_scalar(ray.direction, t));
	t_vec sub = vec_sub(*intersect, plane.position);
	if (sub.x < 0 || sub.x > 10 || sub.y < 0 || sub.y > 10 || sub.z < 0 || sub.z > 10)
		return (1);
	return (0);
}
