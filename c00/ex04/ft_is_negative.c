/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:55:26 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/14 08:33:16 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	texto;

	texto = 'N';
	if (n < 0)
		write(1, &texto, 1);
	else
	{	
		texto = 'P';
		write(1, &texto, 1);
	}
}
