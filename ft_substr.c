/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:27:01 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/14 18:30:59 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*b;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		b = malloc(sizeof(char) * 1);
		*b = 0;
		return (b);
	}
	i = start;
	l = ft_strlen(&(s[start]));
	if (len > l)
		len = l;
	if (!(b = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i != len + start)
	{
		b[i - start] = s[i];
		i++;
	}
	b[len] = 0;
	return (b);
}
