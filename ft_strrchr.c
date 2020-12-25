/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 05:09:20 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/07 18:04:06 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int k;

	i = 0;
	k = -1;
	while (s[i])
	{
		if (s[i] == c)
			k = i;
		i++;
	}
	if (k != -1)
	{
		s = s + k;
		return ((char *)s);
	}
	if (s[i] == '\0' && c == '\0')
	{
		s = s + i;
		return ((char *)s);
	}
	return (0);
}
