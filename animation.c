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
		ft_move_left(game);
	if ((key == 2 || key == 124) && !(*game)->end)
		ft_move_right(game);
	if (key == 53)
		ft_escape(game);
//	ft_draw_map(game);
	return (0);
}

void	ft_key_actions(t_data **game)
{
	mlx_hook((*game)->win_ptr, 2, 0, ft_key, game);
	mlx_key_hook((*game)->win_ptr, ft_key, *game);
	mlx_loop_hook((*game)->mlx_ptr, ft_game_end, game);
	mlx_hook((*game)->win_ptr, 17, 0, ft_close, game);
}
