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

int	main(int argc, char **argv)
{
	t_data	*game;

	if (argc == 2)
	{
		game = (t_data *)malloc(sizeof(t_data));
		if (!game)
			return (-1);
		ft_check_data(argv[1]);
		ft_init_struct(game);
		if (!ft_reading_map(argv[1], &game))
			ft_error(9);
		ft_game_bonus(&game);
		if (game)
			ft_clean_struct(game);
	}
	else
		ft_error(10);
	return (0);
}
