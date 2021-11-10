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


static void	ft_check_line(char *line)
{
	size_t	len;
	size_t	index;

	index = 0;
	len = ft_strlen(line);
	while (index < 0)
	{
		if ()
	}
}

void	ft_map_character(char *file)
{
//	int		rd;
	int		fd;
	char	*line;
	int		check;

	check = 0;
	fd = open (file, 0_RDONLY);
	if (fd < 0)
		exit (EXIT_FAILURE);
//	rd = 1;
	while (get_next_line(fd, &line))
	{
		ft_check_line(line);
	}
	
	
}