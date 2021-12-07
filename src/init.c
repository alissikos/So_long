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

#include "../hdr/so_long.h"

t_data	*ft_init_struct(t_data *game)
{
	game->array = NULL;
	game->wall = NULL;
	game->player_left = NULL;
	game->player_right = NULL;
	game->collectible = NULL;
	game->empty_space = NULL;
	game->exit_closed = NULL;
	game->exit_open = NULL;
	game->assets = "01CPE\0";
	game->height = 0;
	game->width = 0;
	game->x_player = 0;
	game->y_player = 0;
	game->flag_player = 0;
	game->num_of_collectibles = 0;
	game->score = 0;
	game->step = 0; // check if it's just counting checks or for game over
	game->steps = 0;
	game->prev_step = 0;
	game->out = 0;
	game->end = 0;
	game->counter = 0;
	return (game);
}

void	ft_init_array(char *file, t_data **game)
{
	(*game)->height = ft_get_height(file);
	(*game)->width = ft_get_width(file);
	(*game)->array = malloc(sizeof(char *) * ((*game)->height));
	if (!((*game)->array))
		exit (EXIT_FAILURE);
}
