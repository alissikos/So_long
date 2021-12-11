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
	if ((*game)->out > 0 && !(*game)->end)
	{
		mlx_clear_window((*game)->mlx_ptr, (*game)->win_ptr);
		mlx_string_put((*game)->mlx_ptr, (*game)->win_ptr, i, j, 0xFE5C9D, "You win!");
//		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->game_win, i, j);
	}
	else if ((*game)->end == 1) // при столкновении с врагом
	{
		printf("!!!\n");
//		ft_draw_map(game);
		mlx_clear_window((*game)->mlx_ptr, (*game)->win_ptr);
		mlx_string_put((*game)->mlx_ptr, (*game)->win_ptr, i, j, 0xFE5C9D, "Game over.");
//		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->game_over, i, j);
	}
	else if ((*game)->end == 2) // игра окончена - в основной части проиграть невозможно
	{
		mlx_clear_window((*game)->mlx_ptr, (*game)->win_ptr);
		mlx_string_put((*game)->mlx_ptr, (*game)->win_ptr, i, j, 0xFE5C9D, "Game over.");
//		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->game_over, i, j);
	}
	return (0);
}
