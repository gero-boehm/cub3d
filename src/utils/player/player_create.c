#include "playerdef.h"

t_player	player_create(t_vec position)
{
	return ((t_player){position, 0, 0});
}
