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

size_t	ft_get_height(char *file)
{
	int		fd;
	char	*line;
	size_t	height;

	height = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		exit (EXIT_FAILURE);
	while (get_next_line(&line, fd))
	{
		if (line)
			free(line);
		height++;
	}
	if (line)
		free(line);
	close (fd);
	return (height);
}

size_t	ft_get_width(char *file)
{
	int		fd;
	char	*line;
	size_t	width;

	width = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		exit (EXIT_FAILURE);
	while (get_next_line(&line, fd))
	{
		width = ft_strlen(line);
		if (line)
			free(line);
	}
	if (line)
		free(line);
	close(fd);
	return (width);
}

void	ft_check_map(char *file) //проверка на прямоугольность карты
{
	int		fd;
	char	*line;
	size_t	width;
	size_t	tmp;

	tmp = ft_get_width(file);
	width = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		exit (EXIT_FAILURE);
	while (get_next_line(&line, fd))
	{
		width = ft_strlen(line);
		if (line)
			free(line);
		if (width != tmp)
			ft_error(7);
	}
	if (line)
		free(line);
	close(fd);
}

void	ft_map_name(char *file)
{
	const char	*dot;
	size_t		len;

	len = ft_strlen(file);
	dot = (const char *)&file[len - 4];
	if (ft_strncmp(dot, ".ber", 4) != 0)
		ft_error(1);
}

//void	ft_check_data(char *file)
//{
//	ft_check_map(file);
//	ft_map_name(file);
//	ft_map_chars_check(file);
//}
