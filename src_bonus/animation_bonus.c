/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:20 by aheidy            #+#    #+#             */
/*   Updated: 2021/12/13 22:31:34 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/so_long_bonus.h"

int	ft_key_hook(int key, t_data *game)
{
	char	str[100];

	if ((key == 13 || key == 126 || key == 1 || key == 125 || key == 0 \
		|| key == 123 || key == 2 || key == 124) && !game->out && !game->end)
		mlx_string_put (game->mlx_ptr, game->win_ptr, 50, 70, 0xFE5C9D, \
				ft_itoa_b(game->step, str));
	return (0);
}

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
	if (!(*game)->end)
		ft_draw_map(game);
	if (key == 53)
		ft_escape(game);
	ft_key_hook(key, (*game));
	return (0);
}

void	ft_key_actions_bonus(t_data **game)
{
	mlx_hook((*game)->win_ptr, 2, 0, ft_key, game);
	mlx_loop_hook((*game)->mlx_ptr, ft_game_end, game);
	mlx_hook((*game)->win_ptr, 17, 0, ft_close, game);
}
