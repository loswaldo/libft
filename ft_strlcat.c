/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:29:42 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/07 17:35:40 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t c;
	size_t s;

	i = 0;
	s = ft_strlen(src);
	c = 0;
	if (dstsize == 0)
		return (s);
	while (dstsize > i && dst[i])
		i++;
	if (dstsize <= i)
		return (s + dstsize);
	dstsize--;
	while (src[c] && dstsize && (dstsize - i))
	{
		dst[i + c] = src[c];
		c++;
		dstsize--;
	}
	dst[c + i] = 0;
	return (i + s);
}
