/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:48:47 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/02/25 12:05:22 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* lstclear deletes and free the entire box and the next one */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*box;

	if (*lst == NULL)
		return ;
	box = *lst;
	while (box != NULL)
	{
		ft_lstdelone(box, del);
		box = box->next;
	}
	*lst = NULL;
}
