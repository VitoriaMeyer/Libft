/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:22:00 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/24 16:16:52 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* strchr search for the first occurrence of (c) in (s) */
/* returns a pointer to the located character */
/* if (c) is `\0' the functions locate the terminating `\0'. */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == 0 && c != 0)
		return (0);
	return ((char *)s);
}
