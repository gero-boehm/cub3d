#ifndef RAY_H
# define RAY_H

# include "raydef.h"

t_ray	ray_create(t_vec origin, t_vec direction);
int		ray_intersect(t_ray ray, t_plane plane, t_vec *intersect);

#endif