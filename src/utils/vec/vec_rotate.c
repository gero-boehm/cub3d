#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "vecdef.h"
#include "mat.h"

t_vec	vec_rotate(t_vec v, double pitch, double yaw)
{
	t_mat	mat_pitch;
	t_mat	mat_yaw;

	mat_create(mat_pitch,
		1.0, 0.0, 0.0,
		0.0, cos(pitch), -sin(pitch),
		0.0, sin(pitch), cos(pitch)
	);
	mat_create(mat_yaw,
		cos(yaw), 0.0, sin(yaw),
		0.0, 1.0, 0.0,
		-sin(yaw), 0.0, cos(yaw)
	);
	return (mat_apply(mat_apply(v, mat_pitch), mat_yaw));
}
