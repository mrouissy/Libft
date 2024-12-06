/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:35:08 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/06 04:42:33 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	size_t	len;

	if (n > 0)
		len = 0;
	else
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*alloc(size_t len)
{
	char	*ptr;

	ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	return (ptr);
}

static char	*ifpos(int n, size_t memlen, char sign)
{
	char	*res;

	res = alloc(memlen);
	if (!res)
		return (0);
	res[memlen] = '\0';
	while (memlen > 0)
	{
		res[--memlen] = n % 10 + '0';
		n /= 10;
	}
	if (sign == '-')
		res[0] = '-';
	return (res);
}

static char	*ifneg(int n)
{
	return (ifpos(-n, intlen(-n) + 1, '-'));
}

char	*ft_itoa(int n)
{
	char	*ptr;

	ptr = 0;
	if (n == -2147483648)
	{
		ptr = alloc(11);
		if (ptr)
			ft_strlcpy(ptr, "-2147483648", 12);
	}
	else if (n > 0)
	{
		ptr = ifpos(n, intlen(n), '+');
	}
	else if (n == 0)
	{
		ptr = malloc(2);
		if (ptr)
		{
			ptr[0] = '0';
			ptr[1] = '\0';
		}
	}
	else if (n < 0)
		ptr = ifneg(n);
	return (ptr);
}
