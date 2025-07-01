/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:16:06 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/30 10:21:55 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	rt;

	rt = 1;
	while (nb >= (rt * rt))
	{
		if (nb == (rt * rt))
			return (rt);
		rt++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(18));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(35));
}
 */
