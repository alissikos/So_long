/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_end_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:20 by aheidy            #+#    #+#             */
/*   Updated: 2021/12/13 22:30:50 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/so_long_bonus.h"

int	ft_close(t_data **game)
{
	mlx_destroy_window((*game)->mlx_ptr, (*game)->win_ptr);
	exit (EXIT_SUCCESS);
	return (0);
}

int	ft_game_end(t_data **game)
{
	int	i;
	int	j;

	i = (*game)->width / 2 * PIC_SIZE;
	j = (*game)->height / 2 * PIC_SIZE;
	if ((*game)->out > 0 && (*game)->end < 2)
	{
		mlx_clear_window((*game)->mlx_ptr, (*game)->win_ptr);
		mlx_string_put((*game)->mlx_ptr, (*game)->win_ptr, i, j,
			0xFE5C9D, "You win!");
		(*game)->end = 1;
	}
	else if ((*game)->end == 2)
	{
		mlx_clear_window((*game)->mlx_ptr, (*game)->win_ptr);
		mlx_string_put((*game)->mlx_ptr, (*game)->win_ptr, i, j,
			0xFE5C9D, "Game over.");
	}
	return (0);
}
