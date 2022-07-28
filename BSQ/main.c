/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:46:21 by gcruz             #+#    #+#             */
/*   Updated: 2022/07/27 19:16:03 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void ft_read_map(char *map)
{
	int i;
	int j;
	int cont;
	char **matrix;
	int sizes[2];

	ft_sizes_col_row(map, sizes);
	matrix = ft_malloc(sizes);
	i = 0;
	cont = 0;
	while (map[cont] != '\0' && i < sizes[0])
	{
		j = 0;
		while (map[cont] != '\n' && map[cont] != '\0')
		{
			matrix[i][j] = map[cont];
			j++;
			cont++;

		}
		i++;
		cont++;
	}
	ft_fill(matrix, sizes);
}

int main(void)
{
    int file = 0;
    char map[2048];

    file = open("map_20_20_5", O_RDONLY);
	while ((read(file, map, 2048)) > 0)
    	ft_read_map(map);
    close(file);
}


