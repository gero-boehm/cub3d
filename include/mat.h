#ifndef MAT_H
# define MAT_H

# include "matdef.h"

void	mat_create(t_mat mat, ...);
t_vec	mat_apply(t_vec v, t_mat mat);

#endif