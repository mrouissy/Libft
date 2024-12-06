/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:26:56 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 04:51:46 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)str;
	while (buf[i])
	{
		if (buf[i] == (unsigned char)c)
		{
			return ((char *) str + i);
		}
		i++;
	}
	if (buf[i] == (unsigned char)c)
		return ((char *) str + i);
	return (0);
}
