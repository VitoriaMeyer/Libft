/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:57:29 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/01/31 19:15:22 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
   size_t i;

   i = 0;
   if (!dst && !src)
        return (0);
   while (i < n)
   {
      ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
   }
   return (dst);
}
/*
int main () 
{
   const char src[] = "12345";
   char dst[] = "00000";
   printf("Before dest = %s || src = %s\n", dst, src);
   ft_memcpy(dst, src, 4);
   printf("After  dest = %s || src = %s\n", dst, src);
   
   return(0);
}*/