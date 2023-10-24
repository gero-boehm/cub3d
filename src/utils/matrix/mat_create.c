#include <stdarg.h>
#include "matdef.h"

void	mat_create(t_mat mat, ...)
{
	va_list	args;

	va_start(args, mat);
	mat[0][0] = va_arg(args, double);
	mat[0][1] = va_arg(args, double);
	mat[0][2] = va_arg(args, double);
	mat[1][0] = va_arg(args, double);
	mat[1][1] = va_arg(args, double);
	mat[1][2] = va_arg(args, double);
	mat[2][0] = va_arg(args, double);
	mat[2][1] = va_arg(args, double);
	mat[2][2] = va_arg(args, double);
	va_end(args);
}
