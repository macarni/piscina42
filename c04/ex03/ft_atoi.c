/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrperez <adrperez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:17:13 by adrperez          #+#    #+#             */
/*   Updated: 2022/07/26 20:21:08 by adrperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		i;
	int		num;

	i = 0;
	sign = 1;
	num = 0;
	while (is_space(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (sign * num);
}

/*int	main(void)
{
	char *num = " ---+--+1234--";
	char *num2 = "--0hdjfn";
	char *num3 = "--+-0123hdjfn";
	char *num4 = "- + ++ - 18237ksjldlka1827";
	char *num5 = "-12345";
    char *num6 = "0";

	printf("Resultado ft_atoi: %d\n", ft_atoi(num));
	printf("Resultado ft_atoi: %d\n", ft_atoi(num2));
	printf("Resultado ft_atoi: %d\n", ft_atoi(num3));
	printf("Resultado ft_atoi: %d\n", ft_atoi(num4));
	printf("Resultado ft_atoi: %d\n", ft_atoi(num5));
    printf("Resultado ft_atoi: %d\n", ft_atoi(num6));

}*/
