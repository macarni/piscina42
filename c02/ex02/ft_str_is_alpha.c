/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:47:43 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/19 10:22:07 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str = "Hola";
	printf("Resultado: %d", ft_str_is_alpha(str));
	return (0);
}*/
