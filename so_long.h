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
# include <fcntl.h>

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
	int		flag_player;
	int		num_of_collectibles;
	int		score;
	char	*assets;
	int		step;
	int		steps;
	int		prev_step;
	int		out;
	int		end;
	int		counter;
}			t_data;

//char	*check_rest(char *rest, char **line);
//int		check_lesen(int lesen, char **buf, char **line);
//int		get_rest_and_line(char **n_point, char **buf, char **rest, char **line);
//int		get_return(char **buf, int lesen, char **rest, char **line);

// gnl and libft
int		get_next_line(char **line, int fd);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strdup(const char *str);

//init.c
t_data	*ft_init_struct(t_data *game);
void	ft_init_array(char *file, t_data **game);

//map_checks.c
size_t	ft_get_height(char *file);
size_t	ft_get_width(char *file);
void	ft_check_map(char *file);
void	ft_map_name(char *file);
void	ft_check_data(char *file);

//map_checks2.c
static int		ft_chars(int ch);
static void		ft_line_check(char *line);
static int		ft_exit_check(char *line);
void			ft_map_chars_check(char *file);
void			ft_wall_check(t_data *game);

//error.c
void	ft_error(int check);

//map.c
int	ft_reading_map(char *file, t_data **game);

//image.c
void	ft_init_window(t_data **game);
void	ft_xpm_to_image(t_data **game);
void	ft_image_to_window(t_data **game, char ch, int i, int j);
void	ft_draw_map(t_data **game);

//actions.c
void	ft_move_up(int key, t_data **game);
void	ft_move_down(int key, t_data **game);
void	ft_move_left(int key, t_data **game);
void	ft_move_right(int key, t_data **game);

//actions_utils.c
char	get_map_char(t_data **game, int x, int y);
int	if_can_move(t_data **game, int x, int y);
void	ft_check_score(t_data **game, int x, int y);
int	if_win(t_data **game, int x, int y);

//animation.c
void	ft_key(int key, t_data **game);
void	ft_key_actions(t_data **game);

//game_utils.c
void	ft_count_collectibles(t_data **game);
void	ft_get_p_position(t_data **game);
void	ft_game(t_data **game);

//clean.c
void	ft_clean_array(t_data *game);
void	ft_clean_struct(t_data *game);

#endif
