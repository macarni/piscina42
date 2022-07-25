/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:40:44 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/07/17 23:21:07 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	prnt(int row, int col, char table[row][col])
{
	int	r;
	int	c;

	r = 0;
	while (r < row)
	{
		c = 0;
		while (c < col)
		{
			write(1, &table[r][c], 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

void	complete_rows(char *row, char tab[4][4])
{
	int	cpt;

	cpt = 0;
	while (cpt < 4)
	{
		if (row[cpt] == '1' && row[cpt + 4] == '2')
			tab[cpt][3] = '3';
		else if (row[cpt] == '2' && row[cpt + 4] == '3')
			tab[cpt][1] = '4';
		if (row[cpt] == '4')
		{
			tab[cpt][0] = '1';
			tab[cpt][1] = '2';
			tab[cpt][2] = '3';
			tab[cpt][3] = '4';
		}
		else if (row[cpt] == '1')
			tab[cpt][0] = '4';
		cpt++;
	}
	while (cpt < 8)
	{
		if (row[cpt] == '1' && row[cpt - 4] == '2')
			tab[cpt - 4][0] = '3';
		else if (row[cpt] == '2' && row[cpt - 4] == '3')
			tab[cpt - 4][2] = '4';
		if (row[cpt] == '4')
		{
			tab[cpt - 4][3] = '1';
			tab[cpt - 4][2] = '2';
			tab[cpt - 4][1] = '3';
			tab[cpt - 4][0] = '4';
		}
		else if (row[cpt] == '1')
			tab[cpt - 4][3] = '4';
		cpt++;
	}
}

void	complete_cols(char *col, char tab[4][4])
{
	int cpt;

	cpt = 0;
	while (cpt < 4)
	{
		if (col[cpt] == '1' && col[cpt + 4] == '2')
			tab[3][cpt] = '3';
		else if (col[cpt] == '2' && col[cpt + 4] == '3')
			tab[1][cpt] = '4';
		if (col[cpt] == '4')
		{
			tab[0][cpt] = '1';
			tab[1][cpt] = '2';
			tab[2][cpt] = '3';
			tab[3][cpt] = '4';
		}
		else if (col[cpt] == '1')
			tab[0][cpt] = '4';
		cpt++;
	}
	while (cpt < 8)
	{
		if (col[cpt] == '1' && col[cpt - 4] == '2')
			tab[1][cpt - 4] = '3';
		else if (col[cpt] == '2' && col[cpt - 4] == '3')
			tab[2][cpt - 4] = '4';
		if (col[cpt] == '4')
		{
			tab[3][cpt - 4] = '1';
			tab[2][cpt - 4] = '2';
			tab[1][cpt - 4] = '3';
			tab[0][cpt - 4] = '4';
		}
		else if (col[cpt] == '1')
			tab[3][cpt - 4] = '4';
		cpt++;
	}
}

int		count_char(int row, int col, char tab[row][col], char ch)
{
	int res;
	int r;
	int c;

	res = 0;
	r = 0;
	while (r < row)
	{
		c = 0;
		while (c < col)
		{
			if (tab[r][c] == ch)
				res++;
			c++;
		}
		r++;
	}
	return (res);
}
