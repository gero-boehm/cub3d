#include <math.h>
#include "playerdef.h"
#include "vec.h"

t_vec	player_get_look_at(t_player *player)
{
	return (vec_create(
		cos(player->yaw) * cos(player->pitch),
		sin(player->yaw) * cos(player->pitch),
		sin(player->pitch)
	));
}
