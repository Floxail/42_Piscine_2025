/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:44:51 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/06 16:33:01 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = malloc(sizeof(int) * (max - min));
	if (!dest)
		return (NULL);
	while (i < max - min)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	a = atoi(av[1]);
	int	b = atoi(av[2]);
	int *res = ft_range(a,b);
	int i = 0;
	while (i < b - a)
	{
		printf("%d\n", res[i++]);
	}
	return (1);

} */
