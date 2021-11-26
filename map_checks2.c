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
//#include "so_long.h"
//
//static int	ft_chars(int ch)
//{
//	if (ch == 48 || ch == 49 || ch == 67 || ch == 69 || ch == 80)
//		return (1);
//	else
//		return (0);
//}
//
//static void	ft_line_check(char *line)
//{
//	size_t	len;
//	size_t	index;
//
//	index = 0;
//	len = ft_strlen(line);
//	while (index < len)
//	{
//		if (ft_chars(line[index]) == 0) // проверить эту строчку, думаю, что нужно переписать на чар
//			ft_error(4); // проверить код ошибки
//		index++;
//	}
//}
//
//static int	ft_exit_check(char *line)
//{
//	size_t	len;
//	size_t	index;
//
//	index = 0;
//	len = ft_strlen(line);
//	while (index < len)
//	{
//		if (line[index] == 69)
//			return (1);
//		index++;
//	}
//	return (0);
//}
//
//void	ft_map_chars_check(char *file)
//{
//	int		fd;
//	char	*line;
//	int		check;
//
//	check = 0;
//	fd = open(file, O_RDONLY);
//	if (fd < 0)
//		exit(EXIT_FAILURE);
//	while (get_next_line(&line, fd))
//	{
//		ft_line_check(line);
//		if (ft_exit_check(line))
//			check += 1;
//		if (line)
//			free(line);
//	}
//	if (line)
//		free(line);
//	close(fd);
//	if (check == 0)
//		ft_error(4);
//}
//
//void	ft_wall_check(t_data *game)
//{
//	int	line;
//	int	columns;
//
//	line = 0;
//	while (line < game->height)
//	{
//		columns = 0;
//		while (columns < game->width)
//		{
//			if ((game->array[line][columns] != '1' && line == 0) ||
//			(game->array[line][columns] != '1' && columns == 0) ||
//			(game->array[line][columns] != '1' && line == game->height - 1) ||
//			(game->array[line][columns] != '1' && columns == game->width - 1))
//				ft_error(3);
//			columns++;
//		}
//		line++;
//	}
//}
