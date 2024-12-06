/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:03:45 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 14:23:38 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 && !s2)
		return (0);
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *) malloc(len_s1 + len_s2 + 1);
	if (!ptr)
		return (0);
	ft_strlcpy (ptr, s1, len_s1 + 1);
	ft_strlcat (ptr, s2, len_s1 + len_s2 + 1);
	return (ptr);
}
