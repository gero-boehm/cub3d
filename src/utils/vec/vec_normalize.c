#include "vec.h"

t_vec	vec_normalize(t_vec v)
{
	return (vec_div_scalar(v, vec_length(v)));
}
