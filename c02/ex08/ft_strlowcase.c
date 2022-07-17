/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:24:02 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/17 18:29:45 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[5] = "hOLA";
	char str2[5] = "h8la";
	char str3[5] = "HOLA";
	printf("%s", ft_strlowcase(str));
	printf("\n%s", ft_strlowcase(str2));
	printf("\n%s", ft_strlowcase(str3));
	return (0);
}
