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

void	ft_escape(t_data **game)
{
	mlx_clear_window((*game)->mlx_ptr, (*game)->win_ptr);
	mlx_destroy_window((*game)->mlx_ptr, (*game)->win_ptr);
	exit(EXIT_SUCCESS);
}

int	ft_key(int key, t_data **game)
{
	if ((key == 13 || key == 126) && !(*game)->end)
		ft_move_up(game);
	if ((key == 1 || key == 125) && !(*game)->end)
		ft_move_down(game);
	if ((key == 0 || key == 123) && !(*game)->end)
	{
		(*game)->flag_right_left = 2;
		ft_move_left(game);
	}
	if ((key == 2 || key == 124) && !(*game)->end)
	{
		(*game)->flag_right_left = 1;
		ft_move_right(game);
	}
	if (key == 53)
		ft_escape(game);
	if (!(*game)->end)
		ft_draw_map(game);
	return (0);
}

void	ft_key_actions(t_data **game)
{
//	mlx_hook((*game)->win_ptr, 2, 0, ft_key, game);
	mlx_key_hook((*game)->win_ptr, ft_key, game);
	mlx_loop_hook((*game)->mlx_ptr, ft_game_end, game);
	mlx_hook((*game)->win_ptr, 17, 0, ft_close, game);
}

void 	ft_change_img(t_data **game, int i, int j)
{
	if ((*game)->b_flag == 0 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl00, i, j);
	if ((*game)->b_flag == 1 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl01, i, j);
	if ((*game)->b_flag == 2 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl02, i, j);
	if ((*game)->b_flag == 3 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl03, i, j);
	if ((*game)->b_flag == 4 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl04, i, j);
	if ((*game)->b_flag >= 5 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl05, i, j);
	if ((*game)->b_flag == 0 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl00_l, i, j);
	if ((*game)->b_flag == 1 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl01_l, i, j);
	if ((*game)->b_flag == 2 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl02_l, i, j);
	if ((*game)->b_flag == 3 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl03_l, i, j);
	if ((*game)->b_flag == 4 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl04_l, i, j);
	if ((*game)->b_flag >= 5 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->pl05_l, i, j);
}
