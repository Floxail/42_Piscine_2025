/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:52:54 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/13 18:11:24 by damarcin         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	main(void)
{
	write(1, "genre quatre\n\n\n\nen fait seize jsp\n", 34);
	return (0);
}

/*
int	main(int ac, char **av)
{
	int		i;
	char	**dict;

	i = ac - 1;
	if (ft_chknbr(av[i]))
		ft_putstr("Error\n");
	if ((ac < 2 && ac > 4)  || dicterror(av[1]))
		ft_putstr("Dict Error\n");

	if (ac == 3)
		dict = ft_split(getrawdict(av[i]), ": \n");
	else
		dict = ft_split(getrawdict("./numbers.dict"), ": \n");
	free(dict);
}
*/
