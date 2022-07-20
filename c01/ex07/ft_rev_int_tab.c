/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:00:49 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/18 13:31:44 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = aux;
		i++;
	}
}

/*int    main(void)
{
    int    num[4] = {1, 2, 3, 4};

    ft_rev_int_tab(num, 4);

    int cont = 0;
    while (cont < 4)
    {
        printf("%d", num[cont]);
        cont++;
    }
}*/
