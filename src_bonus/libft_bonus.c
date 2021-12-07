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

#include "../hdr/so_long_bonus.h"

int	ft_strlen(const char *str) // есть в гнл, добавить свой гнл со всеми
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i] && i + 1 < n)
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

char	*ft_strdup(const char *str) // есть в гнл
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(*dst) * (len + 1));
	if (dst == NULL)
		return (NULL);
	while (i < len)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
