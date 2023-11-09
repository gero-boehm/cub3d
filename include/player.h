#ifndef PLAYER_H
# define PLAYER_H

# include "playerdef.h"
# include "vecdef.h"

t_player	player_create(t_vec position);

t_vec		player_get_look_at(t_player *player);

t_vec		player_get_left(t_player *player);
t_vec		player_get_right(t_player *player);
t_vec		player_get_front(t_player *player);
t_vec		player_get_back(t_player *player);

void		player_move_left(t_player *player);
void		player_move_right(t_player *player);
void		player_move_front(t_player *player);
void		player_move_back(t_player *player);

#endif