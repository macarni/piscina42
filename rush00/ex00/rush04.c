/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:10:38 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/10 12:28:44 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	rush(int c, int r)
{
	int	i;
	int	j;

	i = 1;
	while (i <= r && c > 0 && r > 0)
	{
		j = 1;
		while (j <= c)
		{
			if ((i == 1 && j == 1) || (i == r && j == c && i != 1 && j != 1))
				ft_putchar('A');
			else if ((i == 1 || i == r) && (j != 1 && j != c))
				ft_putchar('B');
			else if ((j == 1 || j == c) && (i != 1 && i != r))
				ft_putchar('B');
			else if ((i == 1 && j == c) || (i == r && j == 1))
				ft_putchar('C');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
