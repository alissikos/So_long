/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:21:07 by aheidy            #+#    #+#             */
/*   Updated: 2021/12/04 16:21:26 by aheidy           ###   ########.fr       */
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
			printf("Step:%d\n", (*game)->steps++);
		}
	}
//	printf("Step:%d\n", (*game)->steps++); // написать везде + сравнивать прев степ со степом, только прир азнице печатать (в бонусах не нужно)
//	ft_draw_map(game);
}

void	ft_move_down(t_data **game)
{
	int	x;
	int	y;

	x = (*game)->x_player;
	y = (*game)->y_player;
	if (!(*game)->out) // если нельзя  выйти
	{
		(*game)->prev_step = (*game)->step;
		if (if_can_move(game, x, y + 1))
		{
			(*game)->out = if_win(game, x, y + 1);
			ft_check_score(game, x, y + 1);
			(*game)->y_player += 1;
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
			printf("Step:%d\n", (*game)->steps++);
		}
	}
//	ft_draw_map(game);
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
			(*game)->flag_player = 0;
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
			printf("Step:%d\n", (*game)->steps++);
		}
	}
//	ft_draw_map(game);
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
			(*game)->flag_player = 1;
			ft_change_map(game, '0', x, y);
			ft_change_map(game, 'P', (*game)->x_player, (*game)->y_player);
			printf("Step:%d\n", (*game)->steps++);
		}
	}
//	ft_draw_map(game);
}
