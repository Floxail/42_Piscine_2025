/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 09:21:13 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/02 14:49:33 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
/*
	#include <stdio.h>
	int main()
	{
		printf("%d\n", ft_fibonacci(15));
		printf("%d\n", ft_fibonacci(2));
		printf("%d\n", ft_fibonacci(3));
		printf("%d\n", ft_fibonacci(11));
		printf("%d\n", ft_fibonacci(42));
	} */
