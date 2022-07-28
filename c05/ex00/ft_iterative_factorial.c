/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:05:57 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/27 20:00:19 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = nb;
	res = 1;
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		res *= i;
		i--;
	}
	return (res);
}

/*int	main(void)
{
	int mul = ft_iterative_factorial(5);
	printf("%d\n", mul);
	mul = ft_iterative_factorial(7);
	printf("%d", mul);
}*/
