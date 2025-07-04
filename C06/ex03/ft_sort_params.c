/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 09:31:42 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/04 13:10:10 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp( char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*swap;

	i = 2;
	j = 1;
	while (j <= argc + 2)
	{
		i = 2;
		while (i < argc)
		{
			if (ft_strcmp(argv[i], argv[i - 1]) < 0)
			{
				swap = argv[i];
				argv[i] = argv[i - 1];
				argv[i - 1] = swap;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
