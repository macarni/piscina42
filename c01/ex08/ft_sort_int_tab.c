/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:20:31 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/16 20:49:26 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	pos;

	pos = 0;
	while (pos < size - 1)
	{
		if (tab[pos] > tab[pos + 1])
		{
			aux = tab[pos];
			tab[pos] = tab[pos + 1];
			tab[pos + 1] = aux;
			pos = 0;
		}
		else
			pos++;
	}
}
/*int	main(void)
{
	int array[5] = {8, -13, 0, 10, 5};
	ft_sort_int_tab(array, 5);
	return (0);

	//meter esto en la función para probar
	pos = 0;
	while(pos < size)
	{
		printf("%d", tab[pos]);
		if (pos != size - 1)
			printf(", ");
		pos++;
	}
}*/
