/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:20 by aheidy            #+#    #+#             */
/*   Updated: 2021/12/13 22:31:14 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/so_long_bonus.h"

void	ft_change_img(t_data **game, int i, int j)
{
	if ((*game)->b_flag == 0 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl00, i, j);
	if ((*game)->b_flag == 1 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl01, i, j);
	if ((*game)->b_flag == 2 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr,
			(*game)->win_ptr, (*game)->pl02, i, j);
	if ((*game)->b_flag == 3 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr,
			(*game)->win_ptr, (*game)->pl03, i, j);
	if ((*game)->b_flag == 4 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl04, i, j);
	if ((*game)->b_flag >= 5 && (*game)->flag_right_left == 1)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl05, i, j);
	ft_change_img2(game, i, j);
}

void	ft_change_img2(t_data **game, int i, int j)
{
	if ((*game)->b_flag == 0 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl00_l, i, j);
	if ((*game)->b_flag == 1 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl01_l, i, j);
	if ((*game)->b_flag == 2 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl02_l, i, j);
	if ((*game)->b_flag == 3 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl03_l, i, j);
	if ((*game)->b_flag == 4 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl04_l, i, j);
	if ((*game)->b_flag >= 5 && (*game)->flag_right_left == 2)
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr,
			(*game)->pl05_l, i, j);
}
