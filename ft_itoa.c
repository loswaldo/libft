/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 21:28:00 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/14 14:41:24 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_c(int n)
{
	int i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == -0 || n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		c;

	i = ft_c(n) - 1;
	c = i + 1;
	if (!(str = malloc(sizeof(char) * (c + 1))))
		return (0);
	if (n == -2147483648)
		str[i--] = '8';
	if (n == -2147483648)
		n = n / 10;
	if (n < 0)
		str[0] = '-';
	if (n < 0)
		n = n * -1;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[i--] = (n % 10) + '0';
		n = n / 10;
	}
	str[c] = 0;
	return (str);
}
