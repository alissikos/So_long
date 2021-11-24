/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:20 by aheidy            #+#    #+#             */
/*   Updated: 2021/11/10 15:47:22 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_up(int key, t_data **game)
{
	int	x;
	int	y;

	x = (*game)->x_player;
	y = (*game)->y_player;
	if (!(*game)->out)
	{
		(*game)->prev_step = (*game)->step;
		if (if_can_move(game, x, y - 1))
		{
			(*game)->out = if_win(game, x, y - 1);
			ft_check_score(game, x, y + 1);
			(*game)->y_player += 1;
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
		}
	}
	printf("Step:%d\n", (*game)->steps++);
}

void	ft_move_down(int key, t_data **game)
{
	int	x;
	int	y;

	x = (*game)->x_player;
	y = (*game)->y_player;
	if (!(*game)->out)
	{
		(*game)->prev_step = (*game)->step;
		if (if_can_move(game, game, x, y + 1))
		{
			(*game)->out = if_win(game, x, y + 1);
			ft_check_score(game, x, y + 1);
			(*game)->y_player += 1;
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
		}
	}
}

void	ft_move_left(int key, t_data **game)
{
	int	x;
	int	y;

	x = (*game)->x_player;
	y = (*game)->y_player;
	if (!(*game)->out)
	{
		(*game)->prev_step = (*game)->step;
		if (if_can_move(game, x - 1, y))
		{
			(*game)->out = if_win(game, x - 1, y);
			ft_check_score(game, x - 1, y);
			(*game)->x_player -= 1;
			(*game)->flag_player = 0;
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
		}
	}
}

void	ft_move_right(int key, t_data **game)
{
	int	x;
	int	y;

	x = (*game)->x_player;
	y = (*game)->y_player;
	if (!(*game)->out)
	{
		(*game)->prev_step = (*game)->step;
		if (if_can_move(game, x + 1, y))
		{
			(*game)->out = if_win(game, x + 1, y);
			ft_check_score(game, x + 1, y);
			(*game)->x_player += 1;
			(*game)->flag_player = 1;
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
		}
	}
}
