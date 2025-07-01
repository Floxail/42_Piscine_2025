/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:36:14 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/29 16:59:43 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		res = 1;
	while (nb >= i)
	{
		res = res * i;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_iterative_factorial(1));
	printf("%d\n", ft_is_iterative_factorial(0));
	printf("%d\n", ft_is_iterative_factorial(6));
}
*/
