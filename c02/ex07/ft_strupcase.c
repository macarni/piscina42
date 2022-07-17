/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:24:17 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/17 18:30:19 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[5] = "hOLA";
	char str2[5] = "hol8";
	char str3[5] = "HOLA";
	printf("%s", ft_strupcase(str));
	printf("\n%s", ft_strupcase(str2));
	printf("\n%s", ft_strupcase(str3));
	return (0);
}
