/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:22:02 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/24 16:32:10 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* strrchr search for the last occourence of c */
/* returns a pointer to the located character */

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
