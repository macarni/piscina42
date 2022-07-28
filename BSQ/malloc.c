/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:38:04 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/27 15:44:36 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void ft_sizes_col_row(char *map, int *sizes)
{
    int col = 0;
	int row = 0;
    int cont;

    cont = 0;
    while (map[cont] != '\0')
	{
		col = 0;
		while (map[cont] != '\n')
		{
			col++;
			cont++;
		}
		row++;
		cont++;
	}

    sizes[0]=row;
    sizes[1]=col + 1;
}

char **ft_malloc(int *sizes)
{
    int col;
	int row;
    int cont;
    char **matrix;

    col = sizes[1];
    row = sizes[0];
    cont = 0;
    matrix = (char **)malloc(sizeof(char *) * row);
    while (cont < row)
    {
        matrix[cont]= (char *)malloc(sizeof(char *) * col);
        cont++;
    }  
    return matrix; 
}