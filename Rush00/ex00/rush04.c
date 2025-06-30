/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:01:32 by flvejux           #+#    #+#             */
/*   Updated: 2025/06/28 22:59:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_first_line(int x)
{
	int	count;

	count = 0;
	while (count < x)
	{
		if (count == 0)
			ft_putchar('A');
		else if (count == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		count++;
	}
}

void	write_last_line(int x)
{
	int	count;

	count = 0;
	while (count < x)
	{
		if (count == 0)
			ft_putchar('C');
		else if (count == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		count++;
	}
}

void	write_body(int x)
{
	int	count;

	count = 0;
	while (count < x)
	{
		if (count == 0 || count == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		count++;
	}
}

void	rush(int x, int y)
{
	int	count;

	if (x <= 0 || y <= 0)
		return ;
	count = 0;
	if (count == 0)
	{
		write_first_line(x);
		count++;
		ft_putchar('\n');
	}
	while (count > 0 && count < y - 1)
	{
		write_body(x);
		count++;
		ft_putchar('\n');
	}
	if (count == y - 1)
	{
		write_last_line(x);
		count++;
		ft_putchar('\n');
	}
}
