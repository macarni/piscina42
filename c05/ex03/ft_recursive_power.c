/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:25:16 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/27 20:11:36 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}

/*int	main(void)
{
	int pot = ft_recursive_power(5, 2);
	printf("%d\n", pot);
	pot = ft_recursive_power(3, 0);
	printf("%d\n", pot);
	pot = ft_recursive_power(-3, 4);
	printf("%d\n", pot);
	pot = ft_recursive_power(3, -2);
	printf("%d\n", pot);
	pot = ft_recursive_power(3, 1);
	printf("%d\n", pot);
	return (0);

}*/
