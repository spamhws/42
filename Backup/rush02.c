/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:35:43 by radelwar          #+#    #+#             */
/*   Updated: 2021/02/13 13:59:41 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_chars(char corner, char center, int columns)
{
	int j;

	j = 1;
	ft_putchar(corner);
	while (++j < columns)
	{
		ft_putchar(center);
	}
	if (columns > 1)
	{
		ft_putchar(corner);
	}
}

void	put_chars(int i, int rows, int columns)
{
	char corner;
	char center;

	if (i == 1)
	{
		corner = 'A';
		center = 'B';
	}
	else if (i > 1 && i < rows)
	{
		corner = 'B';
		center = ' ';
	}
	else
	{
		corner = 'C';
		center = 'B';
	}
	print_chars(corner, center, columns);
}

void	rush01(int columns, int rows)
{
	int i;

	i = 0;
	while (++i < rows + 1 && columns > 0)
	{
		put_chars(i, rows, columns);
		ft_putchar('\n');
	}
}
