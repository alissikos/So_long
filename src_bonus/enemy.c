///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   so_long.h                                          :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: aheidy <marvin@42.fr>                      +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2021/11/10 15:47:20 by aheidy            #+#    #+#             */
///*   Updated: 2021/11/10 15:47:22 by aheidy           ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */
//
//#include "../hdr/so_long_bonus.h"
//
//void	ft_set_enemy_pos_case(t_data **game) // установка врага в центр, если не получается, то на пустое место
//{
//	int i;
//	int j;
//
//	i = 1;
//	j = 1;
//	while ((*game)->enem_c != 2 && j < (*game)->height - 1)
//	{
//		if ((*game)->array[j][i] == '0')
//		{
//			(*game)->x_enemy = i;
//			(*game)->y_enemy = j;
//			(*game)->enem_c = 2;
//		}
//		i++;
//	}
//	j++;
//}
//
//void	ft_set_enemy(t_data **game)
//{
//	int i;
//	int j;
//
//	i = (*game)->width / 2;
//	j = (*game)->height / 2;
//	if (get_map_char(game, i, j) != 'P' && get_map_char(game, i, j) != 'C')
//	{
//		(*game)->x_enemy = i;
//		(*game)->y_enemy = j;
//		(*game)->enem_c = 2;
//	}
//	else
//		ft_set_enemy_pos_case(game);
//	(*game)->enem_c = 0;
//}
//
//void	ft_put_enemy(t_data **game, int i, int j)
//{
//	if (i / PIC_SIZE == (*game)->x_enemy && j / PIC_SIZE == (*game)->y_enemy)
//	{
//		if ((*game)->enem_c == 0 && (*game)->end == 0)
//			mlx_put_image_to_window((*game)->mlx_ptr, (*game)->win_ptr, (*game)->enemy, i, j);
//		if ((*game)->enem_c == 2)
//			(*game)->enem_c = 0;
//	}
//}
//
//int	ft_if_enemy(t_data **game, int x, int y)
//{
//	if (x == (*game)->x_enemy && y == (*game)->y_enemy)
//		return (1);
//	return (0);
//}