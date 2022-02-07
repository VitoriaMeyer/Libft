/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:40:10 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/03 15:43:06 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	c;
	int	s;

	i = 0;
	c = 0;
	s = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			s = -1;
		i++;
		if (!(str[i] <= 57 && str[i] >= 48))
			return (0);
	}
	else if (!(str[i] <= 57 && str[i] >= 48))
		return (0);
	while (str[i] <= 57 && str[i] >= 48)
	{
		c = (c * 10) + (str[i] - 48);
		i++;
	}
	return (c * s);
}
/*
int	main(void)
{
	char	*frase;

	frase = "      -400s12";
	printf("Original = %d\n", atoi(frase));
	printf("Fake = %d\n", ft_atoi(frase));
}

 	espaco infinito
	so 1 sinal
	so numeros
*/
