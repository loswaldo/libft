/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:05:11 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/03 12:48:05 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	c_uc;
	unsigned char	*b_uc;

	i = 0;
	c_uc = (unsigned char)c;
	b_uc = (unsigned char *)b;
	while (i != len)
	{
		b_uc[i] = c_uc;
		i++;
	}
	return (b);
}
