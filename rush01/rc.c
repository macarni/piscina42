/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:33:45 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/07/17 23:33:54 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <head.h>

void	check_line(int row, int col, char tab[row][col])
{
	int cpt;
	int i;
	int check;
	int ch;
	int save;

	cpt = 0;
	while (cpt < row)
	{
		i = 0;
		check = 0;
		ch = 0;
		while (i < col)
		{
			ch = ch + tab[cpt][i] - '0';
			if (tab[cpt][i] == '0')
			{
				check++;
				save = i;
			}
			i++;
		}
		if (check == 1)
			tab[cpt][save] = (10 - ch) + '0';
		cpt++;
	}
}

void	check_col(int row, int col, char tab[row][col])
{
	int cpt;
	int i;
	int check;
	int ch;
	int save;

	cpt = 0;
	while (cpt < col)
	{
		i = 0;
		check = 0;
		ch = 0;
		while (i < row)
		{
			ch = ch + tab[i][cpt] - '0';
			if (tab[i][cpt] == '0')
			{
				check++;
				save = i;
			}
			i++;
		}
		if (check == 1)
			tab[save][cpt] = (10 - ch) + '0';
		cpt++;
	}
}

void	check_and_change(int row, int col, char tab[row][col])
{
	char	cpt;
	int		r;
	int		c;
	int		rr;
	int		cc;

	cpt = '1';
	while (cpt <= '4')
	{
		rr = 0;
		cc = 0;
		if (count_char(4, 4, tab, cpt) == 3)
		{
			r = 0;
			while (r < row)
			{
				c = 0;
				while (c < col)
				{
					if (tab[r][c] == cpt)
					{
						rr += r;
						cc += c;
					}
					c++;
				}
				r++;
			}
			tab[6 - rr][6 - cc] = cpt;
		}
		cpt++;
	}
}
