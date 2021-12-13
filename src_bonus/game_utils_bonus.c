/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:20 by aheidy            #+#    #+#             */
/*   Updated: 2021/12/11 22:38:47 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/so_long_bonus.h"

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

void	ft_game_bonus(t_data **game)
{
	ft_count_collectibles(game);
	ft_get_p_position(game);
	ft_init_window(game);
	ft_xpm_to_image_bonus(game);
	ft_draw_map(game);
	ft_key_actions_bonus(game);
	mlx_loop((*game)->mlx_ptr);
}
