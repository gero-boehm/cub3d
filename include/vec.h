#ifndef VEC_H
# define VEC_H

# include "vecdef.h"

t_vec	vec_create(double x, double y, double z);
t_vec	vec_add(t_vec v1, t_vec v2);
t_vec	vec_sub(t_vec v1, t_vec v2);
double	vec_dot(t_vec v1, t_vec v2);
t_vec	vec_cross(t_vec v1, t_vec v2);
t_vec	vec_normalize(t_vec v);
t_vec	vec_mult_scalar(t_vec v, double scalar);
t_vec	vec_div_scalar(t_vec v, double scalar);
double	vec_length(t_vec v);

t_vec 	vec_rotate(t_vec v, double pitch, double yaw);

void	vec_print(t_vec v);

#endif