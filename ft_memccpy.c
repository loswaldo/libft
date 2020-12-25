/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:26:04 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/07 14:29:07 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst_uc;
	unsigned char	*src_uc;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dst_uc = (unsigned char *)dst;
	src_uc = (unsigned char *)src;
	while (i < n)
	{
		dst_uc[i] = src_uc[i];
		if (src_uc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
