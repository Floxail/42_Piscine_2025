/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:19:54 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/09 16:29:25 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		j = i + 1;
		while (s1[j])
		{
			if (s1[i] == s1[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	nb;

	nb = nbr;
	len = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1 || !ft_strcmp(base))
		return ;
	len = ft_strlen(base);
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= len)
		ft_putnbr_base(nb / len, base);
	ft_putchar(base[nb % len]);
}

/* int	main(int argc, char **argv)
{
	ft_putnbr_base(atoi(argv[argc - 2]), argv[argc - 1]);
} */
