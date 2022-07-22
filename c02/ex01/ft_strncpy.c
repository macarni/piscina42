/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:26:50 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/19 11:23:53 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (cont < n && src[cont] != '\0')
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}

/*int	main(void)
{
	char src[] = "Hola";
	char dest[4];
	ft_strncpy(dest, src, 2);
	printf("Source: %s", src);
	printf("\nDestino: %s", dest);
	return (0);
}*/
