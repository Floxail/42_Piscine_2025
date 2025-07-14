/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damarcin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:59:55 by damarcin          #+#    #+#             */
/*   Updated: 2025/07/13 13:47:21 by damarcin         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	getdictsize(char *path)
{
	int	size;
	int	file;
	char	buffer[1];

	file = open(path, O_RDONLY);
	while (read(file, buffer, sizeof(buffer)) == sizeof(buffer))
		size++;
	close(file);
	return size;
}


char	*getrawdict(char *path)
{
	char	*rawdict;
	int	file;
	int	i;
	char	buffer[1];

	i = 0;
	rawdict = malloc(sizeof(char) * getdictsize(path) + 1);
	if (!rawdict)
		return (NULL);
	file = open(path, O_RDONLY);
	while(read(file, buffer, sizeof(buffer)) == sizeof(buffer))
	{
		rawdict[i] = buffer[0];
		i++;
	}
	close(file);
	rawdict[i] = '\0';
	return (rawdict);
}

int	lineerror(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
	{
		if (str[i] > '9' || str[i] < '0')
			return (1);
		while (str[i] && (str[i] <= '9' && str[i] >= '0'))
			i++;
		while (str[i] && str[i] == ' ')
			i++;
		if (!str[i] || str[i++] != ':')
			return (1);
		while (str[i] && str[i] == ' ')
			i++;
		if (!str[i] || str[i] < 32 || str[i] > 126)
			return (1);
		while (str[i] >= 32 && str[i] <= 126)
			i++;
		if (str[i] != '\n')
			return (1);
	}
	return (0);
}


int	dicterror(char *path)
{
	int	i;
	char	*dict;

	dict = getrawdict(path);
	i = 0;
	while (dict[i])
	{
		if (!lineerror(dict + i))
		{
			while (dict[i] && *(dict + i) != '\n')
				i++;
		}
		else 
		{
			free(dict);
			return (1);
		}
		i++;
	}
	free(dict);
	return (0);
}
