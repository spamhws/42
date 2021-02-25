/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:28:20 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/22 17:05:32 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char source[] = "AHSW";

	// Copies the first num characters of source to destination
	printf("%d", ft_str_is_uppercase(source));

	return 0;
}