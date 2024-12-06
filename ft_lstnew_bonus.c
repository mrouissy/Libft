/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:32:02 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 04:46:09 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = 0;
	head = (t_list *) malloc(sizeof(t_list));
	if (!head)
		return (0);
	head -> content = content;
	head -> next = 0;
	return (head);
}
