/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:24:09 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/27 11:20:29 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include<stdio.h>

int main()
{
    char str[] = "hello world! this is a test.";
    printf("Original: %s\n", str);
	ft_strupcase(str);
    printf("Capitalized: %s\n",str);
    return 0;
}
*/
