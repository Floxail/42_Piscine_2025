/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 15:57:22 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/29 16:57:36 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(3, 4));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(3, -1));
} */
