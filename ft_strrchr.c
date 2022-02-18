/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:22:02 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/18 07:00:11 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	ci;

	ci = c;
	l = ft_strlen(s);
	while (ci != s[l] && l >= 0)
		l--;
	if (ci == s[l])
		return ((char *)s + l);
	return (0);
}

/*
int main(void)
{
    char str1[] = "hello";
    char c = 'l';

    printf("The output is at: %p\n", ft_strrchr(str1, c));
    printf("The output is at: %p\n", strrchr(str1, c));

}
*/