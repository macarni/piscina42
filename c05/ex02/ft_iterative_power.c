/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:13:25 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/27 20:08:44 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*int	main(void)
{
	int pot = ft_iterative_power(5, 2);
	printf("%d\n", pot);
	pot = ft_iterative_power(3, 0);
	printf("%d\n", pot);
	pot = ft_iterative_power(-3, 4);
	printf("%d\n", pot);
	pot = ft_iterative_power(3, -2);
	printf("%d\n", pot);
	pot = ft_iterative_power(3, 1);
	printf("%d\n", pot);
	return (0);

}*/
