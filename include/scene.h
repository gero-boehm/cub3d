#ifndef SCENE_H
# define SCENE_H

#include "scenedef.h"
#include "vecdef.h"

char	scene_get(t_scene *scene, t_vec position);
void	scene_draw(t_scene *scene);

#endif