#include <stdio.h>
#include "vecdef.h"

void	vec_print(t_vec v)
{
	printf("(%lf, %lf, %lf)\n", v.x, v.y, v.z);
}
