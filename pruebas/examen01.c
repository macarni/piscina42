/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   examen01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:59:12 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/15 17:01:32 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char *frase = "Hola que tal";
	int i = 0;
	char *palabra;

	while(frase[i] != ' ')
	{
		palabra[i] = frase[i];
		write(1, palabra[i], 1);
		i++;
	}

	return (0);
}
