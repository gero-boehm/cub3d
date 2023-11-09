#include "constdef.h"
#include "playerdef.h"
#include "vec.h"

t_vec	player_get_left(t_player *player)
{
	return (vec_rotate(vec_create(0, 0, 1), 0, player->yaw - PI_HALF));
}

t_vec	player_get_right(t_player *player)
{
	return (vec_rotate(vec_create(0, 0, 1), 0, player->yaw + PI_HALF));
}

t_vec	player_get_front(t_player *player)
{
	return (vec_rotate(vec_create(0, 0, 1), 0, player->yaw));
}

t_vec	player_get_back(t_player *player)
{
	return (vec_rotate(vec_create(0, 0, 1), 0, player->yaw - PI));
}
