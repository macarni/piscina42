/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:05:17 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/16 12:59:24 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 5;
	ft_div_mod(a, b, &a, &b);
	//Meter en la función
	printf("Div: %d", *div);
	printf(" Mod: %d", *mod);
}*/
