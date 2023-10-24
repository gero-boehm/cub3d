#ifndef PLANEDEF_H
# define PLANEDEF_H

# include "vecdef.h"

typedef enum e_bearing
{
	BEARING_NORTH,
	BEARING_EAST,
	BEARING_SOUTH,
	BEARING_WEST,
}	t_bearing;

typedef struct s_plane
{
	t_vec		position;
	t_vec		normal;
	t_bearing	bearing;
}	t_plane;

#endif