/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:03:49 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/09 18:02:47 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	chk_base(char b, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (b == base[i])
			return (i);
		i++;
	}
	return (-1);
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

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;

	if (!ft_strcmp(base) || ft_len(base) == 1 || !ft_len(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	res = 0;
	while (chk_base(*str, base) >= 0)
	{
		res = (res * ft_len(base) + chk_base(*str, base));
		str++;
	}
	return (sign * res);
}

int main ()
{
	printf("%d",ft_atoi_base("7b", "0123456789abcdef"));
	return (0);
}
