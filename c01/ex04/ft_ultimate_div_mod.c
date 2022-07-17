/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:17:45 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/16 13:05:05 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dividendo;
	int	divisor;

	dividendo = *a;
	divisor = *b;
	*a = dividendo / divisor;
	*b = dividendo % divisor;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	//Meter en la función
	printf("a = %d", *a);
	printf("\nb = %d", *b);
}*/
