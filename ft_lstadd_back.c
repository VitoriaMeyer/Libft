/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:46:33 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/18 06:49:06 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*box;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	box = *lst;
	while (box->next != NULL)
		box = box->next;
	box->next = new;
}
