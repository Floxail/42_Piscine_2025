/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:36:05 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/30 16:00:59 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	while ((*s1 == *s2) && *s1 && (n > 0))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n" ,ft_strncmp("H#ll0", "H3llo", 6));
	printf("%d\n" ,ft_strncmp("Hell0", "HEllO", 6));
	printf("%d\n" ,ft_strncmp("Hell0", "Hell0", 6));
}
 */
