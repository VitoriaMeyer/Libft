/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:02:14 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/25 15:42:34 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* split allocates memory */
/* takes a string and separate using (c) */
/* all the separated parts turn into strings inside an array */

static int	counter(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*str;
	size_t	ct;

	if (s == NULL)
		return (NULL);
	ct = counter(s, c);
	new = (char **)malloc(sizeof(char *) * (ct + 1));
	if (new == NULL)
		return (NULL);
	str = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (str != s)
				*(new ++) = ft_substr(str, 0, s - str);
			str = (char *)s + 1;
		}
		s++;
	}
	if (str != s)
		*(new ++) = ft_substr(str, 0, s - str);
	*new = 0;
	return (new - ct);
}
