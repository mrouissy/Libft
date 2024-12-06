/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:03:06 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 20:03:08 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (buf[i] == (unsigned char)c)
			return (&buf[i]);
		i++;
	}
	return (0);
}
