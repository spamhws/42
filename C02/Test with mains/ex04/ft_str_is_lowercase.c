/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:28:20 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/22 15:48:16 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char* source = "";

	// Copies the first num characters of source to destination
	printf("%d", ft_str_is_lowercase(source));

	return 0;
}