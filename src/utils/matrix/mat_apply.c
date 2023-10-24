#include "matdef.h"
#include "vecdef.h"

t_vec	mat_apply(t_vec v, t_mat mat)
{
	return ((t_vec){
		mat[0][0] * v.x + mat[0][1] * v.y + mat[0][2] * v.z,
		mat[1][0] * v.x + mat[1][1] * v.y + mat[1][2] * v.z,
		mat[2][0] * v.x + mat[2][1] * v.y + mat[2][2] * v.z
	});
}
