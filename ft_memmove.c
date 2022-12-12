/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:27:36 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/12/12 12:52:51 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* memmove copies (len) bytes from (src) to (dst) */
/* the two strings may overlap, the copy is always done anyway */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src && n > 0)
		return ((void *) 0);
	if (src < dest)
	{
		i = n;
		while (i-- > 0)
			*((char *)dest + i) = *((const char *)src + i);
	}
	else
	{
		i = -1;
		while (++i < n)
			*((char *)dest + i) = *((const char *)src + i);
	}
	return (dest);
}