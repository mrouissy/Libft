/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:46:21 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 14:19:56 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sized;
	size_t	i;

	if (dstsize == 0 && !dst)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	sized = ft_strlen(dst);
	i = 0;
	while (src[i] && sized + 1 < dstsize)
	{
		dst[sized] = src[i];
		sized++;
		i++;
	}
	dst[sized] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
