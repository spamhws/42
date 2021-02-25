/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:35:43 by radelwar          #+#    #+#             */
/*   Updated: 2021/02/13 14:02:23 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_chars(char corner1, char corner2, char center, int columns)
{
	int j;

	j = 1;
	ft_putchar(corner1);
	while (++j < columns)
	{
		ft_putchar(center);
	}
	if (columns > 1)
	{
		ft_putchar(corner2);
	}
}

void	put_chars(int i, int rows, int columns)
{
	char corner1;
	char corner2;
	char center;

	if (i == 1)
	{
		corner1 = 'A';
		corner2 = 'C';
		center = 'B';
	}
	else if (i > 1 && i < rows)
	{
		corner1 = 'B';
		corner2 = 'B';
		center = ' ';
	}
	else
	{
		corner1 = 'C';
		corner2 = 'A';
		center = 'B';
	}
	print_chars(corner1, corner2, center, columns);
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
