/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:10:38 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/10 13:06:01 by adrperez         ###   ########.fr       */
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
				ft_putchar('o');
			else if ((j == c && i == 1) || (i == r && j == 1))
				ft_putchar('o');
			else if ((i != 1 && i != r) && (j == 1 || j == c))
				ft_putchar('|');
			else if ((i == 1 || i == r) && (i == 1 || i == r))
				ft_putchar('-');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
