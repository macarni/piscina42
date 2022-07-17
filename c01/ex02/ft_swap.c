/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 08:54:21 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/16 12:56:09 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*int	main(void)
{
	int	a;
	int	b;

	a = 40;
	b = 50;
	ft_swap(&a, &b);
	printf("a=%d", a);
	printf(" b=%d", b);
	return (0);
}*/
