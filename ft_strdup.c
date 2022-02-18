/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:39:41 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/11 03:44:03 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	i = ft_strlen(s1) + 1;
	dst = malloc(sizeof(char) * i);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, i);
	return (dst);
}
