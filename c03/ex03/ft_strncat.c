/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:33:44 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/24 21:08:23 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
 The strncat() function concatenates no more than n characters 
 of the string pointed to by src to the end of the string pointed 
 to by dst. The first character of src overwrites the null character 
 at the end of dst. This function always adds a terminating null 
 character to the result. Returns dest.
 */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char str1[800] = "Hola, ";
	char str2[] = "que tal?";
	
	strncat(str1, str2, 1);
	printf("Source: %s\n", str2);
	printf("Destino: %s\n", str1);

	char str3[800] = "Hola, ";
	char str4[] = "que tal?";
	
	ft_strncat(str3, str4, 1);
	printf("Source: %s\n", str4);
	printf("Destino: %s", str3);
	return (0);
}*/
