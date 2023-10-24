#include <math.h>
#include "vec.h"

double	vec_length(t_vec v)
{
	return (sqrt(vec_dot(v, v)));
}
