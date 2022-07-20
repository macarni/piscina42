/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:28:40 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/19 17:46:25 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*cifras;

	cifras = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print('\\');
			print(cifras[str[i] / 16]);
			print(cifras[str[i] % 16]);
		}
		else
			print(str[i]);
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable("Coucou tu vas bie\t\vn");
	write(1, "\n", 1);
	ft_putstr_non_printable("");
}
