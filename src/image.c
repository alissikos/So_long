/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:20 by aheidy            #+#    #+#             */
/*   Updated: 2021/12/13 20:00:41 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/so_long.h"

void	ft_init_window(t_data **game)
{
	(*game)->mlx_ptr = mlx_init();
	(*game)->win_ptr = mlx_new_window((*game)->mlx_ptr,
			(*game)->width * PIC_SIZE, (*game)->height * PIC_SIZE, "SO LONG");
}

void	ft_xpm_to_image(t_data **game)
{
	int	img_width;
	int	img_height;

	(*game)->wall = mlx_xpm_file_to_image((*game)->mlx_ptr, \
		"./assets/obstacle.xpm", &img_width, &img_height);
	(*game)->player_left = mlx_xpm_file_to_image((*game)->mlx_ptr, \
		"./assets/doll.xpm", &img_width, &img_height);
	(*game)->collectible = mlx_xpm_file_to_image((*game)->mlx_ptr, \
		"./assets/watermelon1.xpm", &img_width, &img_height);
	(*game)->empty_space = mlx_xpm_file_to_image((*game)->mlx_ptr, \
		"./assets/background1.xpm", &img_width, &img_height);
	(*game)->exit_closed = mlx_xpm_file_to_image((*game)->mlx_ptr, \
		"./assets/exit_c1.xpm", &img_width, &img_height);
	(*game)->exit_open = mlx_xpm_file_to_image((*game)->mlx_ptr, \
		"./assets/exit_o1.xpm", &img_width, &img_height);
}

void	ft_image_to_window(t_data **game, char ch, int i, int j)
{
	if (ch == '0')
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, \
			(*game)->empty_space, i, j);
	if (ch == '1')
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, \
			(*game)->wall, i, j);
	if (ch == 'C')
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, \
			(*game)->collectible, i, j);
	if (ch == 'P')
		mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, \
			(*game)->player_left, i, j);
	if (ch == 'E')
	{
		if ((*game)->num_of_collectibles > 0)
			mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, \
				(*game)->exit_closed, i, j);
		else
			mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, \
				(*game)->exit_open, i, j);
	}
}

void	ft_draw_map(t_data **game)
{
	int		line;
	int		columns;
	char	ch;

	line = 0;
	while (line < (*game)->height * PIC_SIZE)
	{
		columns = 0;
		while (columns < (*game)->width * PIC_SIZE)
		{
			ch = (*game)->array[line / PIC_SIZE][columns / PIC_SIZE];
			ft_image_to_window(game, ch, columns, line);
			columns += PIC_SIZE;
		}
		line += PIC_SIZE;
	}
}
