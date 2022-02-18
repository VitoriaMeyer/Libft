/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:02:14 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/18 06:57:20 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static int	count_to_be_strings(const char *s1, char c);
static char	*put_string(const char *s1, int start, int finish);
static void	create_splitted(const char *s1, char c, char **splitted);

char	**ft_split(char const *s1, char c)
{
	char	**splitted;

	if (s1 == NULL)
		return (NULL);
	splitted = malloc(sizeof(char *) * ((count_to_be_strings(s1, c)) + 1));
	if (splitted == NULL)
		return (NULL);
	create_splitted(s1, c, splitted);
	return (splitted);
}

static int	count_to_be_strings(const char	*s1, char c)
{
	int	i;
	int	control;

	i = 0;
	control = 0;
	while (*s1)
	{
		if (*s1 != c && control == 0)
		{
			control = 1;
			i++;
		}
		else if (*s1 == c)
			control = 0;
		s1++;
	}
	return (i);
}

static char	*put_string(const char *s1, int start, int finish)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (finish - start) + 1);
	while (start < finish)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

static void	create_splitted(const char *s1, char c, char **splitted)
{
	size_t	i;
	int		j;
	int		control;

	i = 0;
	j = 0;
	control = -1;
	while (i <= ft_strlen(s1))
	{
		if (s1[i] != c && control < 0)
			control = i;
		else if ((s1[i] == c || i == ft_strlen(s1)) && control >= 0)
		{
			splitted[j++] = put_string(s1, control, i);
			control = -1;
		}
		i++;
	}
	splitted[j] = 0;
}
