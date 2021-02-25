/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:28:20 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/22 17:57:46 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32)
			;
		else 
			return (0);
		i++;
	}
	return (1);
}

// Implement strcpy function in C
int		main(void)
{
	char* source = "asdw~!@@; :~|^";

	// Copies the first num characters of source to destination
	printf("%d", ft_str_is_printable(source));

	return 0;
}