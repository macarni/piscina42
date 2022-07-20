/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 08:44:16 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/19 11:12:59 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strsize(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	srcsize;

	srcsize = ft_strsize(src);
	cont = 0;
	if (size != 0)
	{
		while (cont < size - 1 && src[cont] != '\0')
		{
			dest[cont] = src[cont];
			cont++;
		}
		dest[cont] = '\0';
	}
	return (srcsize);
}

/*int	main()
{
	char src[] = "1234567890123";
	char dest[] = "";
	printf("Tamaño: %d\nResultado destino: %s", ft_strlcpy(dest, src, 100), dest);
	return (0);
}*/
