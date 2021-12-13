/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:20 by aheidy            #+#    #+#             */
/*   Updated: 2021/12/11 22:26:34 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/so_long.h"

void	ft_clean_array(t_data *game)
{
	int	i;

	i = game->height;
	if (!game->array)
		return ;
	while (i >= 0)
	{
		if (game->array[i])
		{
			free(game->array[i]);
			game->array = NULL;
		}
		i--;
	}
}

void	ft_clean_struct(t_data *game)
{
	if (!game)
		exit (EXIT_FAILURE);
	if (game->array)
		ft_clean_array(game);
	if (game)
	{
		free (game);
		game = NULL;
	}
	exit (EXIT_FAILURE);
}
