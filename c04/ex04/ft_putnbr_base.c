/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:29:31 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/26 12:50:26 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	base_length(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	check_errors(char *base)
{
	int		i;
	int		j;
	int		length;

	length = base_length(base);
	i = 0;
	if (length == 0 || length == 1)
		return (1);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[i] != base[j] && base[j] != '\0')
			j++;
		if (base[i] == base[j])
			return (1);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		blen;
	long	num;

	num = nbr;
	blen = base_length(base);
	if (check_errors(base) == 0)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		if (num < blen)
			ft_putchar(base[num] + 0);
		if (num >= blen)
		{
			ft_putnbr_base(num / blen, base);
			ft_putnbr_base(num % blen, base);
		}
	}	
}

/*int		main(void)
{
	int num = -12;
	ft_putnbr_base(num, "01");
	printf("\n");
	ft_putnbr_base(40, "poniguay");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789abcdef");
}*/
