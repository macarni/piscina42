/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:08:29 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/28 10:03:51 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
/* The strlcat() function concatenate strings. It takes the full size 
 * of the buffer (not just the length) and guarantee to NUL-terminate 
 * the result (as long as size is larger than 0 or, in the case of 
 * strlcat(), as long as there's at least one byte free in dst). 
 * For strlcat(), both src and dst must be NUL-terminated.
 * The strlcat() function appends the NUL-terminated string src to the end of dst
 * size es el maximo que puedo copiar incluido el tamaño del destinoº
*/

unsigned int	size_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_size;
	unsigned int	src_size;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_size = i;
	src_size = size_str(src);
	if (size == 0 || size <= dest_size)
		return (src_size + size);
	while (src[j] != '\0' && j < size - dest_size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (src_size + dest_size);
}

/*int	main(void)
{
	char src[] = "????";
    char dest [20] = "Hola que tal";
	char src2[] = "????";
    char dest2[20] = "Hola que tal";	
    printf("Original: %lu \n", strlcat(dest, src, 1));
    printf("Destino original: %s \n", dest);
	printf("Copia: %u \n", ft_strlcat(dest2, src2, 1));
    printf("Destino copia: %s \n", dest2);

}*/
