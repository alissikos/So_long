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

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <stdio.h>
# include "../mlx/mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define PIC_SIZE 100

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*wall;
	void	*player_left;
	void	*player_right;
	void	*pl00;
	void	*pl01;
	void	*pl02;
	void	*pl03;
	void	*pl04;
	void	*pl05;
	void	*pl00_l;
	void	*pl01_l;
	void	*pl02_l;
	void	*pl03_l;
	void	*pl04_l;
	void	*pl05_l;
	void	*collectible;
	void	*empty_space;
	void	*exit_closed;
	void	*exit_open;
	void	*enemy;
	void	*game_over;
	void	*game_win;
	char	**array;
	int		width;
	int		height;
	int		x_player;
	int		y_player;
	int		x_enemy;
	int		y_enemy;
	int		enem_c;
	int		flag_player;
	int 	flag_right_left;
	int		num_of_collectibles;
	int		score;
	char	*assets;
	int		step;
	int		steps;
	int		prev_step;
	int		out;
	int		end;
	int		counter;
	int		b_flag;
}			t_data;

// gnl and libft
int		get_next_line(char **line, int fd);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strdup(const char *str);

//libft_b.c
char	*ft_itoa(int n);

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
void			ft_map_chars_check(char *file);
void			ft_wall_check(t_data *game);

//error.c
void	ft_error(int check);

//map.c
int	ft_reading_map(char *file, t_data **game);

//image_bonus.c
void	ft_init_window(t_data **game);
void	ft_xpm_to_image_bonus(t_data **game);
void	ft_image_to_window(t_data **game, char ch, int i, int j);
void	ft_draw_map(t_data **game);
void	ft_xpm_to_player(t_data **game);

//actions.c
void	ft_move_up(t_data **game);
void	ft_move_down(t_data **game);
void	ft_move_left(t_data **game);
void	ft_move_right(t_data **game);

//actions_utils.c
void	ft_change_map(t_data **game, char ch, int x, int y);
char	get_map_char(t_data **game, int x, int y);
int		if_can_move(t_data **game, int x, int y);
void	ft_check_score(t_data **game, int x, int y);
int		if_win(t_data **game, int x, int y);

//animation.c
int 	ft_key_hook(int key, t_data *game);
void	ft_escape(t_data **game);
int		ft_key(int key, t_data **game);
void	ft_key_actions_bonus(t_data **game);
void 	ft_change_img(t_data **game, int i, int j);

//game_utils.c
void	ft_count_collectibles(t_data **game);
void	ft_get_p_position(t_data **game);
void	ft_game_bonus(t_data **game);

//clean.c
void	ft_clean_array(t_data *game);
void	ft_clean_struct(t_data *game);

//game_end.c
int		ft_close(t_data **game);
int		ft_game_end(t_data **game);

//enemy.c
void	ft_set_enemy_pos_case(t_data **game);
void	ft_set_enemy(t_data **game);
void	ft_put_enemy(t_data **game, int i, int j);
int		ft_if_enemy(t_data **game, int x, int y);

#endif
