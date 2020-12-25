/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaldo <loswaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:54:49 by loswaldo          #+#    #+#             */
/*   Updated: 2020/11/17 14:14:36 by loswaldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	int		n;

	n = 1;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		n = -1;
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '-' || *str == '+')
		return (0);
	while (*str >= '0' && *str <= '9' && i < 2147483648)
	{
		i = i + (*str - 48) % 10;
		str++;
		if (*str >= '0' && *str <= '9')
			i = i * 10;
	}
	if (i * n > 2147483647)
		return (-1);
	if (i * n < -2147483648)
		return (0);
	return (n * i);
}
