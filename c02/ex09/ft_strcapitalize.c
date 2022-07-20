/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:47:09 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/19 17:45:19 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{	
		str[i] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{	
		if (str[i] < '0' || str[i] > 'z' || (str[i] > '9' && str[i] < 'A'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}		
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = ".alut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str1[] = "asdas, ka aa(asa) ?as12adj &askdj /asjd %ajsh $ajsdA&!ajak";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
	return (0);
}
