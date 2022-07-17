/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:47:43 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/17 15:59:52 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str = "Hol9a";
	printf("Resultado: %d", ft_str_is_alpha(str));
	return (0);
}
