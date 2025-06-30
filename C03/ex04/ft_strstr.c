/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:34:16 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/30 09:58:23 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strstr("a;sldoskledog", ""));
	printf("%s\n", ft_strstr("a;sldoskledog", "dog"));
	printf("%s\n", ft_strstr("", "dog"));
} */
