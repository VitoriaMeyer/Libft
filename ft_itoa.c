/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:16:11 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/25 15:46:55 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* itoa allocates memory and converts int to -str- */

int	ft_len(int n)
{
	size_t	len;	

	if (n > 0)
		len = 0;
	else
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*alloc;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	alloc = (char *)malloc(len + 1);
	if (!alloc)
		return (0);
	if (n < 0)
	{
		alloc[0] = '-';
		n = -n;
	}
	alloc[len] = '\0';
	while (n)
	{
		alloc[len - 1] = ((n % 10) + '0');
		n /= 10;
		len--;
	}
	return (alloc);
}
