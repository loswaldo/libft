/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:07:21 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/07 17:53:50 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		if (haystack[i] == needle[n])
		{
			while (haystack[i + n] == needle[n] && i + n < len)
			{
				n++;
				if (needle[n] == 0)
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
