/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 10:17:42 by flvejux           #+#    #+#             */
/*   Updated: 2025/07/03 12:20:46 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{

	if (argc)
	{
		ft_putstr(argv[0]);
		ft_putstr("\n");
	}
	return (0);
}
