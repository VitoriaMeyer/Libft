/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:27:36 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/01 19:07:07 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		i = len - 1;
		dst2 = dst;
		src2 = (char *)src;
	}
	while (len--)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if (dst > src)
			i--;
		else
			i++;
	}
	return (dst);
}
