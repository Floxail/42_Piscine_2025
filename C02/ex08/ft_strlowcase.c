/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 09:59:57 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/27 11:20:26 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else
			i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char	str[] = "HeLL0_wOrLD !";
	printf("original : %s\n", str);
	ft_strlowcase(str);
	printf("modified : %s\n", str);
	return 0;
}
*/
