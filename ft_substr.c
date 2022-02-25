/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:46:04 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/25 11:42:55 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_substr allocates memory and returns a substring(ptr) */
/* the (ptr) begins at int(start) and the size of it is (len) */

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	j;

	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s) + 1;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	j = 0;
	while (start < ft_strlen(s) && j < len)
		ptr[j++] = s[start++];
	ptr[j] = 0;
	return (ptr);
}
