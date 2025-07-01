/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 09:21:13 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/30 10:25:09 by flvejux          ###   ########.fr       */
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
		printf("%d\n", ft_fibonacci(0));
		printf("%d\n", ft_fibonacci(1));
		printf("%d\n", ft_fibonacci(11));
		printf("%d\n", ft_fibonacci(42));
	}
 */
