/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:45:09 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/24 21:05:52 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/* The strcat() function concatenates a copy of the string pointed 
 * to by src (including the terminating NUL character) to the end 
 * of the string pointed to by dst. The first character of src 
 * overwrites the NUL character at the end of dst. Returns dest */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
	char str1[100] = "Hola, ";
	char str2[] = "que tal?";
	
	strcat(str1, str2);
	printf("Source: %s\n", str2);
	printf("Destino: %s\n", str1);

	char str3[100] = "Hola, ";
	char str4[] = "que tal?";
	
	ft_strcat(str3, str4);
	printf("Source: %s\n", str4);
	printf("Destino: %s", str3);

	return (0);
}*/
