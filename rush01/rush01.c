/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:51:31 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/07/17 23:28:48 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <head.h>

void	rush01(char **argv)
{
	char	tab[4][4] = {{'0', '0', '0', '0'}, {'0', '0', '0', '0'},
	{'0', '0', '0', '0'}, {'0', '0', '0', '0'}};
char	row[8];
    char	col[8];
    int	i;
    int	j;
    int	cpt;
    
    i = 0;
    j = 0;

	while(j < 8)
    {
        col[j] = argv[1][i];
        j++;
        i += 2;
    }
    
	j = 0;
    while(j < 8)
    {
        row[j] = argv[1][i];
        j++;
        i += 2;
    }
    
	complete_rows(row, tab);
    complete_cols(col, tab);
    cpt = 0;
    while(cpt <= 16)
    {
		check_and_change(4, 4, tab);
		check_line(4, 4, tab);
		check_col(4, 4, tab);
		cpt++;
    }
	prnt(4, 4, tab);
}

int	main(int argc, char **argv)
{
	if(argc != 2)
    {
		write(1, "Error\n", 6);
    }
    rush01(argv);
}
