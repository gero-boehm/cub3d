#ifndef SCENEDEF_H
# define SCENEDEF_H

# include <MLX42/MLX42.h>
# include "playerdef.h"
# include "planedef.h"
# include "vecdef.h"

# define WIDTH 512
# define HEIGHT 512

typedef struct s_scene
{
	mlx_t			*mlx;
	mlx_image_t		*image;
	mlx_texture_t	*tex;
	t_player		player;
	t_vec			size;
	char			*map;
	t_plane			planes[2];
	// double		depth[WIDTH * HEIGHT];
}	t_scene;

#endif