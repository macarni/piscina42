/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:12:20 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/27 20:16:31 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}	

/*int	main(void)
{
	printf("%i\n", ft_fibonacci(7));
	printf("%i\n", ft_fibonacci(12));
	printf("%i\n", ft_fibonacci(15));
	printf("%i", ft_fibonacci(3));
}*/
