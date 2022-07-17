/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:32:46 by caliaga-          #+#    #+#             */
/*   Updated: 2022/07/10 18:26:55 by caliaga-         ###   ########.fr       */
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
			if ((i == 1 && j == 1) || (i == r && j == 1))
				ft_putchar('A');
			else if ((i == 1 && j == c) || (i == r && j == c))
				ft_putchar('C');
			else if ((i != 1 && i != r) && (j == 1 || j == c))
				ft_putchar('B');
			else if ((i == 1 || i == r) && (j != 1 && j != c))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
