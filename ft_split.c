/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouissy <mrouissy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:28:44 by mrouissy          #+#    #+#             */
/*   Updated: 2024/11/08 14:45:57 by mrouissy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(const char *str1, int sep)
{
	char	*ptr;
	size_t	i;
	size_t	words;
	int		in;

	i = 0;
	in = 0;
	words = 0;
	ptr = (char *)str1;
	while (str1[i])
	{
		if (!in && ptr[i] != sep)
		{
			in = 1;
			words++;
		}
		else if (ptr[i] == sep)
		{
			in = 0;
		}
		i++;
	}
	return (words);
}

static char	*cut(char **str, char c)
{
	char	*debut;
	char	*fin;
	size_t	len;
	char	*res;

	while (**str == c)
		(*str)++;
	debut = *str;
	while (**str && **str != c)
		(*str)++;
	fin = *str;
	len = fin - debut;
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	ft_strlcpy(res, debut, len + 1);
	return (res);
}

static void	failed(char **result, size_t index)
{
	int	i;

	i = (int)index;
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	cw;
	size_t	i;
	char	*sptr;

	if (!s)
		return (0);
	sptr = (char *)s;
	i = 0;
	cw = count(s, c);
	result = malloc(sizeof(char *) * (cw + 1));
	if (!result)
		return (0);
	while (i < cw)
	{
		result[i] = cut(&sptr, c);
		if (!result[i])
		{
			failed(result, i);
			return (0);
		}
		i++;
	}
	result[i] = 0;
	return (result);
}
