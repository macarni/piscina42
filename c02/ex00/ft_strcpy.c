/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:53:09 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/17 13:48:47 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
    
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "Hola";
	char destino[] = "Adios";
	char *prueba;
	prueba = ft_strcpy(destino, src);
	printf("Source: %s", src);
	printf("\nDestino: %s", ft_strcpy(destino, src));
	printf("\nPuntero: %c", *prueba);
	return (0);
}

