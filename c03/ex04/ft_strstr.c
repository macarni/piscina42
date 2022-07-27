/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:42:46 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/25 16:54:50 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
 The strstr() function locates the first occurrence in the 
 string pointed to by str of the sequence of characters
 (excluding the terminating null character) in the string 
 pointed to by to_find. If to_find is an empty string, the 
 function returns str. Returns a pointer to the located string, 
 or NULL if the string isn't found.
 */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (to_find[f] == str[f + i] && to_find[f] != '\0')
			f++;
		if (to_find[f] == '\0')
			return (str + i);
		i++;
	}	
	return (0);
}

/*int	main(void)
{
	char pajar[20] = "Hola que tal";
	char aguja[10] = "que";

	char *ret;
	char *ret1; 

	ret = strstr(pajar, aguja);
	ret1 = ft_strstr(pajar, aguja);
	printf("Original: %s\n", ret);
  	printf("Copia: %s\n", ret1);
 
	return(0);

}*/
