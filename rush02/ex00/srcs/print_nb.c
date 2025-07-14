/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damarcin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:04:14 by damarcin          #+#    #+#             */
/*   Updated: 2025/07/13 18:10:16 by damarcin         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

void	ft_pustr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write (1, &c[i], 1);
		i++;
	}
}

char	*xpower(int i)
{
	char	*power;
	int		x;

	x = 1;
	power = malloc((i + 1) * sizeof(char));
	if (power == NULL)
	{
		power[0] = '\0';
		return (power);
	}
	power[0] = 49;
	while (x <= i)
	{
		power[x] = 48;
		x++;
	}
	power[i] = '\0';
	return (power);
}

int	is_rest_empty(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (c[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	getnbindex(char *str, char **list)
{
	int	i;
	int	j;

	i = 0;
	while (list[i])
	{
		j = 0;
		while (str[j] && list[i])
			if (list[i][j] == str[j])
				i++;
		if (str[j] == list[i][j])
		{
			free(str);
			return (i + 1);
		}
		i++;
	}
	free(str);
	return (-1);
}

void	ft_print_hundred(char *n, char **dict)
{
	char	*str;

	if (n == '0')
		return ;
	str = malloc(sizeof(char) * 2);
	if (!str)
		return ;
	str[0] = *n;
	str[1] = '\0';
	ft_putstr(getnbindex(str, dict));
	write(1, " ", 1);
	ft_putstr(getnbindex("100", dict));
	free(str);
	ft_putstr
	if (!is_rest_empty(n))
		write(1, " ", 1);
}

void	ft_print_single(char *n, char **dict)
{
	char	*str;

	if (n == '0')
		return ;
	str = malloc(sizeof(char) * 2);
	if (!str)
		return ;
	str[0] = *n;
	str[1] = '\0';
	ft_putstr(getnbindex(str, dict));
	free(str);
	if (!is_rest_empty(n))
		write(1, " ", 1);
}


int	printnb(str **dict, *str nb, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if ((len - i) % 3 == 0 && nb[i] != '0')
		{
			ft_print_hundred(nb + i, dict);
			i++;
		}
}
