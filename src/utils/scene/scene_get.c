#include "scenedef.h"
#include "vecdef.h"

char	scene_get(t_scene *scene, t_vec position)
{
	int	index;

	index = position.y * scene->size.x + position.x;
	return (scene->map[index]);
}
