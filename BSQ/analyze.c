/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:29:01 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/27 18:34:36 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void ft_fill(char **matrix, int *sizes)
{
    int i;
    int j;
    int cols;
    int rows;

    cols = sizes[1];
    rows = sizes[0];
    i = 0;
    j = 0;
    while(i < rows)
    {
        j = 0;
        while(j < cols)
        {
            
            if (matrix[i][j] == '.')
            {
                matrix[i][j] = '1';
            }
            j++;
        }
        i++;
    }
    ft_find(matrix, sizes);
    
}

int is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);

}

void ft_find(char **matrix, int *sizes)
{
int i;
    int j;
    int cols;
    int rows;
    int veces;

    cols = sizes[1];
    rows = sizes[0];
    i = 2;
    j = 0;
    veces = 0;
    while(i < rows)
    {
        j = 0;
        while(j < cols)
        {
            if (matrix[i][j] != 'o')
            {
                if(!(j == 0 || i == 0) && is_number(matrix[i - 1][j]) == 1 && is_number(matrix[i][j - 1]) && is_number(matrix[i - 1][j - 1]))
                    matrix[i][j] = ft_lo_que_toca(matrix, i, j);
            }
            j++;
        }
        i++;
    }
    i = 1;
    ft_max_box(matrix, sizes);
    back_to_normal(matrix, sizes);
    print(matrix, sizes);
}

void print(char **matrix, int *sizes)
{
    int rows;
    int cols;
    int i;
    int j;

    i = 1;
    j = 0;
    cols = sizes[1];
    rows = sizes[0];
    while(i < rows)
    {
        j = 0;
        while(j < cols)
        {
            write(1, &matrix[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

char ft_lo_que_toca(char **matrix, int i, int j)
{
    int min;

    min = 0;
    if (matrix[i - 1][j] < matrix[i][j - 1])
        min = matrix[i - 1][j];
    else if (matrix[i][j - 1] < matrix[i - 1][j - 1])
        min = matrix[i][j - 1];
    else 
        min = matrix[i - 1][j - 1];

    min = min + 1;
    return (min);
}

char num_max(char **matrix, int *sizes)
{
    int max;
    int rows;
    int cols;
    int i;
    int j;

    i = 1;
    j = 0;
    cols = sizes[1];
    rows = sizes[0];
    max = matrix[i][j];
    while(i < rows)
    {
        j = 0;
        while(j < cols)
        {
            if (matrix[i][j] > max && is_number(matrix[i][j]) == 1)
                max = matrix[i][j];
            j++;
        }
        i++;
    }
    return max;
}

void ft_max_box(char **matrix, int *sizes)
{
    int max;
    int rows;
    int cols;
    int i;
    int j;
    int found;

    found = 0;
    cols = sizes[1];
    rows = sizes[0];
    i = 0;
    max = num_max(matrix, sizes);
    while(i < rows)
    {
        j = 0;
        while(j < cols && found == 0)
        {
            if (matrix[i][j] == max)
            {
                fill_x(matrix, i, j, max, sizes);
                found = 1;
            }
            j++;
        }
        i++;
    }
}

void fill_x(char **matrix, int i, int j, int max, int *sizes)
{
    int rows;
    int cols;
    int cont;
    int j_max;

    cols = sizes[1];
    rows = sizes[0];
    cont = max;
    j_max = j;
    while(cont > 0)
    {
        j = j_max;
        while (j >= 0)
        {
            matrix[i][j] = 'x';
            j--;
            cont--;
        }
        i--;
    }

}

void back_to_normal(char **matrix, int *sizes)
{
    int i;
    int j;
    int cols;
    int rows;

    cols = sizes[1];
    rows = sizes[0];
    i = 0;
    j = 0;
    while(i < rows)
    {
        j = 0;
        while(j < cols)
        {
            
            if (is_number(matrix[i][j]) == 1)
            {
                matrix[i][j] = '.';
            }
            j++;
        }
        i++;
    }
}


// while(cont_i > 0)
// {
//     cont_j = max;
//     j = j_max;
//     while (cont_j > 0)
//     {
//         matrix[i][j] = 'x';
//         j--;
//         cont_j--;
//     }
//     i--;
//     cont_i--;
// }