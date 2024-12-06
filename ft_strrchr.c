/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:25:20 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 04:52:34 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)str;
	while (buf[i])
		i++;
	while (i >= 0)
	{
		if (buf[i] == (unsigned char)c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
