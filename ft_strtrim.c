/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:15:38 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/14 17:33:04 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (s1 == 0)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = (ft_strlen(s1));
	while (i != 0 && ft_strchr(set, s1[i]))
		i--;
	i++;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	while (n != i)
	{
		str[n] = *s1;
		n++;
		s1++;
	}
	str[n] = 0;
	return (str);
}
