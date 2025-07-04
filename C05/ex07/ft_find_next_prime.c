/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:50:32 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/02 14:48:57 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	pr;

	pr = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (pr < nb)
	{
		if ((nb % pr) == 0)
			return (0);
		pr++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/*
#include<stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(12));
	printf("%d\n", ft_find_next_prime(-12));
}
 */
