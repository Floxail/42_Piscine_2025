/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:24:40 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/08 11:36:58 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	sep_len;

	if (!size)
		return (1);
	sep_len = ft_strlen(sep);
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i++]);
		if (i < size - 1)
			len += sep_len;
		i++;
	}
	return (len > 0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;

	join = malloc(sizeof(char) * ft_count(size, strs, sep) + 1);
	if (!join)
		return (0);
	*join = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i < size - 1)
			ft_strcat(join, sep);
		i++;
	}
	return (join);
}
