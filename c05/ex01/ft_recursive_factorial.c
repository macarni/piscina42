/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:28:42 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/26 13:13:00 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

int	main(void)
{
	int num = ft_recursive_factorial(5);
	printf("%d\n", num);
	num = ft_recursive_factorial(7);
	printf("%d", num);
}
