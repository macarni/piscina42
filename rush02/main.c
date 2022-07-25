/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:41:39 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/24 19:49:42 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	ft_atoi(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

void	print(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{	
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		file = 0;
	char	buffer[2048];

	if (argc != 3 && argc != 2)
		write(1, "Error\n", 6);
	else
	{
		if (argc == 2)
			file = open("numbers.dict", O_RDONLY);		
		else if (argc == 3)
			file = open(argv[1], O_RDONLY);
		while ((read(file, buffer, 2048)) > 0)
			ft_strstr(buffer, argv[1]);
		if (close(file) < 0)
			write(1, "Error\n", 6);
	}
	return (0);
}
