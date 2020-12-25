/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:32:47 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/07 14:38:56 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_uc;

	i = 0;
	s_uc = (unsigned char *)s;
	while (i < n)
	{
		if (s_uc[i] == (unsigned char)c)
			return (&s_uc[i]);
		i++;
	}
	return (0);
}
