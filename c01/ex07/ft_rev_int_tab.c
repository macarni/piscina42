/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:00:49 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/18 08:25:50 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	change;

	cont = 0;
	while (cont < size / 2)
	{
		change = tab[size - 1 - cont];
		tab[size - 1 - cont] = tab[cont];
		tab[cont] = change;
		cont++;
	}
}

/*int	main(void)
{
	int	num[4] = {1, 2, 3, 4};

	ft_rev_int_tab(num, 4);

	int cont = 0;
	while (cont < 4)
	{
		printf("%d", num[cont]);
		cont++;
	}
}*/