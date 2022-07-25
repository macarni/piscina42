/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:41:29 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/24 19:56:30 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		f;
	int		tam;
	char	*aux;

	i = 0;
	tam = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (to_find[f] == str[f + i] && to_find[f] != '\0')
			f++;
		if (is_number(str[f + i]) == 0)
		{
			if (to_find[f] == '\0')
			{
				tam = ft_str_length(str + i);
				aux = cut_str((str + i), tam);
				return (aux);
			}
		}
		i++;
	}
	return ("-1");
}

int	is_character(char letter)
{
	if (letter >= '!' && letter <= 126)
		return (1);
	return (0);
}

int	is_number(char letter)
{
	if (letter >= '0' && letter <= '9')
		return (1);
	return (0);
}

int	ft_str_length(char *str)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (is_character(str[i]) == 0)
		i++;
	while (str[i] != '\n')
	{
		size++;
		i++;
	}
	return (size);
}

char	*cut_str(char *str, int size)
{
	int		i;
	char	*aux = (char*)malloc((size + 1)*sizeof(char));
	int		cont_aux;

	i = 0;
	cont_aux = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (is_character(str[i]) == 0)
		i++;
	while (str[i] != '\n')
	{
		aux[cont_aux] = str[i];
		cont_aux++;
		i++;
	}

	aux[cont_aux] = 0;
	printf("%s\n", aux);
	free(aux);
	return (aux);
}
