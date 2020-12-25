/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:40:15 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/07 14:40:18 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst_uc);
}
