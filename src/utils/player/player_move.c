#include "player.h"
#include "vec.h"

void	player_move_left(t_player *player)
{
	t_vec	new;

	new = vec_add(player->position, player_get_left(player));
	player->position = new;
}

void	player_move_right(t_player *player)
{
	t_vec	new;

	new = vec_add(player->position, player_get_right(player));
	player->position = new;
}

void	player_move_front(t_player *player)
{
	t_vec	new;

	new = vec_add(player->position, player_get_front(player));
	player->position = new;
}

void	player_move_back(t_player *player)
{
	t_vec	new;

	new = vec_add(player->position, player_get_back(player));
	player->position = new;
}
