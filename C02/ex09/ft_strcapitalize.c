/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:53:07 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/27 11:20:19 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	return (ft_is_upper(c) || ft_is_lower(c) || ft_is_num(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_alpha(str[i - 1]) && ft_is_lower(str[i]))
			str[i] -= 32;
		if (ft_is_alpha(str[i - 1]) && ft_is_upper(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main() {
    char str[] = "hello_world! this+is-a test. 42marvin";
    printf("Original: %s\n", str);
    printf("Capitalized: %s\n", ft_strcapitalize(str));
    return 0;
}
*/
