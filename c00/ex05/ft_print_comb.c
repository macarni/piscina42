/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:14:04 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/14 08:36:40 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int n1, int n2, int n3)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = n1 + '0';
	c2 = n2 + '0';
	c3 = n3 + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (n1 != 7)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	n2 = 1;
	n3 = 2;
	while (n1 <= 7 && n2 <= 8 && n3 <= 9)
	{
		print(n1, n2, n3);
		n3++;
		if (n3 == 10)
		{
			n2++;
			n3 = n2 + 1;
		}
		if (n2 == 9)
		{
			n1++;
			n2 = n1 + 1;
			n3 = n2 + 1;
		}
	}
}
