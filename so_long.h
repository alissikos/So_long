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

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include "./mlx/mlx.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*wall;
	void	*player_left;
	void	*player_right;
	void	*collectible;
	void	*empty_space;
	void	*exit_closed;
	void	*exit_open;
	char	**array;
	int		width;
	int		height;
	int		x_player;
	int		y_player;
	int		num_of_cakes;
	int		score;
	char	*assets;
	int		step;
	int		prev_step;
	int		out;
	int		end;
	int		counter;
}			t_data;

char	*check_rest(char *rest, char **line);
int		check_lesen(int lesen, char **buf, char **line);
int		get_rest_and_line(char **n_point, char **buf, char **rest, char **line);
int		get_return(char **buf, int lesen, char **rest, char **line);
int		get_next_line(int fd, char **line);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strdup(const char *str);














#endif
