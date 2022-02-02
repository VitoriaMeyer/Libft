/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:22:18 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/01 17:35:30 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ii;

	i = ft_strlen(dst);
	ii = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[ii] != '\0' && (i + 1 < dstsize))
		dst[i++] = src[ii++];
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[ii]));
}
