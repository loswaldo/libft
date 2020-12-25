/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:03:49 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/19 19:12:36 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word(char const *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && *s)
		{
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (i);
}

int		ft_letter(char const *s, char c)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_zero(char **str)
{
	while (*str)
	{
		free(*str);
		str++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		k;

	i = 0;
	k = ft_word(s, c);
	if (!s || !(str = malloc(sizeof(char**) * (k + 1))))
		return (NULL);
	while (*s && i <= k)
	{
		if (*s != c)
		{
			if (!(str[i] = ft_substr(s, 0, ft_letter(s, c))))
				return (ft_zero(str));
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	str[i] = 0;
	return (str);
}
