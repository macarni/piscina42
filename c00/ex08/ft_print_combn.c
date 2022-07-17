/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:03:22 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/13 13:10:54 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft(int str[], int pos, int n)
{
	while (str[0] < (9 - n + 1))
	{
		if (str[pos] < 9 - n + 1)
		{
			char num = str[pos] + '0';
			write(1, &num, 1);
			str[pos]++;
			write(1, ", ", 2);
		}
		else
		{
			ft(str, (pos + 1), n);
			str[pos]++;
		}
	}
}

// 9 - (n-pos_actual) + 1
void	ft_print_combn(int n)
{
	int	str[10];
	int	i;

	i = 0;
	while (i < n)
	{
		str[i] = i;
		i++;
	}

	ft(str, 0, n);
}

int	main(void)
{
	ft_print_combn(4);
	return (0);
}
