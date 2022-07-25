/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:41:53 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/24 19:29:46 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 

char	*ft_strstr(char *str, char *to_find);
char	*cut_str(char *str, int size);
int	gestion_rutas(int argc, char **argv, char *num, char *ruta);
int		ft_str_length(char *str);
int		is_number(char letter);
