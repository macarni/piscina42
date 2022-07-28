/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:28:42 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/28 11:23:19 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 0;
	if (nb > 1)
		res = ft_recursive_factorial(nb - 1) * nb;
	else
		return (1);
	return (res);
}

/*int	main(void)
{
	int num = ft_recursive_factorial(5);
	printf("%d\n", num);
	num = ft_recursive_factorial(7);
	printf("%d\n", num);
	num = ft_recursive_factorial(0);
	printf("%d", num);
}*/
