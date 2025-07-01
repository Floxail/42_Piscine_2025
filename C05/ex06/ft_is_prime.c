/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:43:57 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/30 15:33:44 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	pr;

	pr = 2;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	while (pr < nb)
	{
		if ((nb % pr) == 0)
			return (0);
		pr++;
	}
	return (1);
}
/*
#include<stdio.h>
int main()
{
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(12));
	printf("%d\n", ft_is_prime(-12));
}
 */
