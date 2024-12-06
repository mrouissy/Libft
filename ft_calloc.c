/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:45:01 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/08 14:45:19 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	size_t	size;
	void	*ptr;

	size = elementCount * elementSize;
	ptr = malloc(size);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, size);
	return (ptr);
}
