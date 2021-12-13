/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:47:20 by aheidy            #+#    #+#             */
/*   Updated: 2021/12/11 22:28:29 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdr/so_long.h"

int	get_next_line(char **line, int fd)
{
	int		rd;
	int		i;
	char	ch;
	char	*buffer;

	rd = 1;
	i = 0;
	buffer = malloc(100000);
	*line = buffer;
	while ((rd > 0) && ch != '\n')
	{
		rd = read(fd, &ch, 1);
		if (ch != '\n' && rd != 0)
			buffer[i++] = ch;
	}
	buffer[i] = '\0';
	return (rd);
}
