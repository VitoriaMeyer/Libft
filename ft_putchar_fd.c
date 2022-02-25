/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:54:43 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/25 16:04:56 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* outputs the character (c) to the given filedescriptor=fd */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
