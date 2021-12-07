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

int	ft_reading_map(char *file, t_data **game)
{
	int		fd;
	int		line;
	char	*line_buf;

	line = 0;
	line_buf = NULL;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (0);
	ft_init_array(file, game);
	while (get_next_line(&line_buf, fd))
	{
		if (line_buf)
		{
			(*game)->array[line] = ft_strdup(line_buf);
			free(line_buf);
			line++;
		}
	}
	if (line_buf)
		free(line_buf);
	close (fd);
//	ft_wall_check((*game));
	return (1);
}
