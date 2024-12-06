/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:02:54 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 20:02:58 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*bufd;
	size_t				i;
	const unsigned char	*bufs;

	i = 0;
	bufd = (unsigned char *)dest;
	bufs = (const unsigned char *)src;
	while (i < n)
	{
		bufd[i] = bufs[i];
		i++;
	}
	return (dest);
}
