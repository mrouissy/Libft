/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:15:18 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 14:21:44 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	j;
	size_t	i;
	char	*big;
	char	*find;

	if (*tofind == 0)
		return ((char *)str);
	i = 0;
	j = 0;
	big = (char *)str;
	find = (char *)tofind;
	while (big[i] && i <= len)
	{
		j = 0;
		while (big[i + j] == find[j] && big[i + j] && (i + j) < len)
			j++;
		if (!find[j])
			return (big + i);
		i++;
	}
	return (0);
}
