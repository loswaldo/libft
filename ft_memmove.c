/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:26:21 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/07 17:22:35 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_uc;
	unsigned char	*src_uc;

	dst_uc = (unsigned char *)dst;
	src_uc = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst_uc > src_uc)
	{
		while (len--)
		{
			dst_uc[len] = src_uc[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
