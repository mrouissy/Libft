/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:08:47 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 04:53:53 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subst;
	size_t	size;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s) - start;
	if (size < len)
		len = size;
	subst = (char *)malloc(len + 1);
	if (!subst)
		return (0);
	ft_strlcpy(subst, s + start, len + 1);
	return (subst);
}
