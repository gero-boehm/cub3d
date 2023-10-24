#ifndef PLAYERDEF_H
# define PLAYERDEF_H

# include "vecdef.h"

typedef struct s_player
{
	t_vec	position;
	double	pitch;
	double	yaw;
}	t_player;


#endif