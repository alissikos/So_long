/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:21:07 by aheidy            #+#    #+#             */
/*   Updated: 2021/12/11 22:33:57 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/so_long_bonus.h"

void	ft_move_up(t_data **game)
{
	int	x;
	int	y;

	x = (*game)->x_player;
	y = (*game)->y_player;
	if (!(*game)->end && !(*game)->out)
	{
		(*game)->prev_step = (*game)->step;
		if (if_can_move(game, x, y - 1))
		{
			(*game)->out = if_win(game, x, y - 1);
			ft_check_score(game, x, y - 1);
			(*game)->y_player -= 1;
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
			(*game)->steps++;
		}
	}
}

void	ft_move_down(t_data **game)
{
	int	x;
	int	y;

	x = (*game)->x_player;
	y = (*game)->y_player;
	if (!(*game)->out)
	{
		(*game)->prev_step = (*game)->step;
		if (if_can_move(game, x, y + 1))
		{
			(*game)->out = if_win(game, x, y + 1);
			ft_check_score(game, x, y + 1);
			(*game)->y_player += 1;
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
			(*game)->steps++;
		}
	}
}

void	ft_move_left(t_data **game)
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
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
			(*game)->steps++;
		}
	}
}

void	ft_move_right(t_data **game)
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
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
			(*game)->steps++;
		}
	}
}
