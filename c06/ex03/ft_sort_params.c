/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:07:40 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/26 19:12:32 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	order(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i][j] == argv[i + 1][j])
			j++;
		if (argv[i][j] > argv[i + 1][j])
		{
			aux = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = aux;
			i = 1;
		}
		else
			i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	order(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
