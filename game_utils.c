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

void	ft_count_collectibles(t_data **game)
{
	int	line;
	int	columns;

	line = 0;
	while (line < (*game)->height)
	{
		columns = 0;
		while (columns < (*game)->width)
		{
			if ((*game)->array[line][columns] == 'C')
				(*game)->num_of_collectibles += 1;
			columns++;
		}
		line++;
	}
	if ((*game)->num_of_collectibles == 0)
		ft_error(5);
}

void	ft_get_p_position(t_data **game)
{
	int	line;
	int	columns;
	int	check;

	line = 0;
	check = 0;
	while (line < (*game)->height)
	{
		columns = 0;
		while (columns < (*game)->width)
		{
			if ((*game)->array[line][columns] == 'P' && check == 0)
			{
				(*game)->x_player = columns;
				(*game)->y_player = line;
				check = 1;
			}
			else if ((*game)->array[line][columns] == 'P' && check == 1)
				ft_error(6);
			columns++;
		}
		line++;
	}
	if ((*game)->x_player == 0)
		ft_error(6);
}

void	ft_game(t_data **game)
{
	ft_count_collectibles(game);
	ft_init_window(game);
	ft_get_p_position(game);
	ft_xpm_to_image(game);
	ft_draw_map(game);// переписать
	ft_key_actions(game);
	mlx_loop((*game)->mlx_ptr);
}
