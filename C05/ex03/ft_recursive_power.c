/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:53:41 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/07 13:07:32 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/* #include <stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_power(3, 4));
	printf("%d\n", ft_recursive_power(1, 0));
	printf("%d\n", ft_recursive_power(4, 4));
} */
