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

char	get_map_char(t_data **game, int x, int y)
{
	char	ch;

	ch = (*game)->array[y][x];
	return (ch);
}

int	if_can_move(t_data **game, int x, int y)
{
	char	ch;

	if (x < 0 || y < 0 || x >= (*game)->width || y >= (*game)->height)
		return (0);
	ch = (*game)->array[y][x];
	if (ch == '1' || (ch == 'E' && (*game)->num_of_collectibles > 0))
		return (0);
	return (1);
}

void	ft_change_map(t_data **game, char ch, int x, int y)
{
	(*game)->array[y][x] = ch;
}

void	ft_check_score(t_data **game, int x, int y)
{
	if (get_map_char(game, x, y) == 'C')
		(*game)->num_of_collectibles -= 1; // сделать тут смену картинки (отд ф-я с делением на 4 или ифами)
	(*game)->step += 1;
//	if ((*game)->num_of_collectibles == 0) // это кажется для макса шагов
//		(*game)->score += 1;
//	if ((*game)->out)  // переписать, было для макс счета
//		(*game)->end = 2;
}

int	if_win(t_data **game, int x, int y)
{
	char	ch;

	ch = (*game)->array[y][x];
	if (ch == 'E' && (*game)->num_of_collectibles == 0)
		return (1);
	return (0);
}
