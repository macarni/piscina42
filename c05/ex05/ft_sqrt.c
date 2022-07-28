/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:14:21 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/28 11:29:18 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	res;

	sqrt = nb / 2;
	res = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (sqrt != res)
	{
		res = sqrt;
		sqrt = ((nb / res) + res) / 2;
	}
	if (nb == (res * res))
		return (res);
	else
		return (0);
}

/*int main (void)
{
	printf("%d: %d\n", 25, ft_sqrt(25));
	printf("%d: %d\n", 49, ft_sqrt(49));
	printf("%d: %d\n", 0, ft_sqrt(0));
	printf("%d: %d\n", 1, ft_sqrt(1));
	printf("%d: %d\n", -23, ft_sqrt(-23));
	printf("%d: %d\n", 4, ft_sqrt(4));
	printf("%d: %d\n", 2147483647, ft_sqrt(2147483647));
}*/
