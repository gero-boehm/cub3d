#include "vecdef.h"

t_vec	vec_mult_scalar(t_vec v, double scalar)
{
	return ((t_vec){v.x * scalar, v.y * scalar, v.z * scalar});
}

t_vec	vec_div_scalar(t_vec v, double scalar)
{
	return ((t_vec){v.x / scalar, v.y / scalar, v.z / scalar});
}
