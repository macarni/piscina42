/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:47:54 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/26 19:50:01 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int	sqrt;
	int	res;

	res = 0;
	sqrt = nb / 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	
	while(res != nb)
	{
		res = sqrt;
		sqrt = sqrt / 2;
	}

	return (sqrt);

}

int main (void)
{
	printf("raiz cuadrada de %d = %d\n", 49, ft_sqrt(49));
	printf("raiz cuadrada de %d = %d\n", 37, ft_sqrt(37));
	printf("raiz cuadrada de %d = %d\n", 0, ft_sqrt(0));
	printf("raiz cuadrada de %d = %d\n", 1, ft_sqrt(1));
	printf("raiz cuadrada de %d = %d\n", -23, ft_sqrt(-23));
	printf("raiz cuadrada de %d = %d\n", -2147483647, ft_sqrt(-2147483647));
	printf("raiz cuadrada de %d = %d\n", 2147483647, ft_sqrt(2147483647));
}
