/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:29:55 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/16 13:14:18 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		cont++;
		str++;
	}
	return (cont);
}

/*int	main(void)
{
	char	*a;
	int		num;

	a = "Hola";
	num = ft_strlen(a);
	printf("%d", num);
	return (0);
}*/
