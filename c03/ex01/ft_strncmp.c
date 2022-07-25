/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:48:49 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/24 21:04:26 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/* The strncmp() function compares up to n characters from the strings 
 * pointed to by s1 and s2.  Returns: < 0 if s1 is less than s2, 
 * 0 if s1 is equal to s2 and > 0 if s1 is greater than s2. */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		diff = s1[i] - s2[i];
		if (s1[i] < s2[i])
			return (diff);
		else if (s1 [i] > s2[i])
			return (diff);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char str1[] = "ab", str2[] = "", str3[] = "abcd";
	int result;

	result = strncmp(str1, str2, 2);
	printf("strncmp(str1, str2) = %d\n", result);
	
	result = strncmp(str1, str3, 2);
	printf("strncmp(str1, str3) = %d\n", result);

	result = ft_strncmp(str1, str2, 2);
	printf("ft_strncmp(str1, str2) = %d\n", result);

	result = ft_strncmp(str1, str3, 2);
	printf("ft_strncmp(str1, str3) = %d\n", result);

	return (0);
}*/
