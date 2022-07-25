/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:22:18 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/24 21:00:20 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

/* The strcmp() function compares the string pointed to by
 * s1 to the string pointed to by s2. Returns: < 0 if s1 is less than 
 * s2, 0 if s1 is equal to s2 and > 0 if s1 is greater than s2. */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (s1[i] < s2[i])
			return (diff);
		else if (s1[i] > s2[i])
			return (diff);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char str1[] = "ab", str2[] = "abCd", str3[] = "abcd";
	int result;

	result = strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", result);

	result = ft_strcmp(str1, str2);
	printf("ft_strcmp(str1, str2) = %d\n", result);

	result = strcmp(str1, str3);
	printf("strcmp(str1, str3) = %d\n", result);

	result = ft_strcmp(str1, str3);
	printf("ft_strcmp(str1, str3) = %d\n", result);

	return (0);
}*/
