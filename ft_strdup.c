/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:46:01 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 14:16:37 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*dest;

	dest = (char *)malloc((ft_strlen(source) * sizeof(char)) + 1);
	if (!dest)
		return (0);
	ft_memcpy(dest, source, ft_strlen(source));
	dest[ft_strlen(source)] = '\0';
	return (dest);
}
