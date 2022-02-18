/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:22:04 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/03 17:01:14 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{	
	printf("strncmp = %d\n", strncmp("Azul", "azul", 4));
	printf("ft_strncmp = %d\n", ft_strncmp("Azul", "azul", 4));
	return (0);
}*/
