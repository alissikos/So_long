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

void	ft_error(int check)
{
	if (check == 1)
		printf("Error: %s\n", "The map description file must "
			"be with the .ber extension.");
	else if (check == 2)
		printf("Error: %s\n", "The map must contain only '01CEP' characters.");
	else if (check == 3)
		printf("Error: %s\n", "The map must be surrounded by walls.");
	else if (check == 4)
		printf("Error: %s\n", "The map must have at least one exit.");
	else if (check == 5)
		printf("Error: %s\n", "The map must have at least one collectible.");
	else if (check == 6)
		printf("Error: %s\n", "The map must have one player.");
	else if (check == 7)
		printf("Error: %s\n", "The map must be rectangular.");
	else if (check == 8)
		printf("Error: %s\n", "To start game you must pass program "
			"name and the map file name.");
	else if (check == 9)
		printf("Error: %s\n", "File reading error.");
	else if (check == 10)
		printf("Error: %s\n", "There must be 2 arguments (program name and map file name).");
	exit(EXIT_FAILURE);
}
