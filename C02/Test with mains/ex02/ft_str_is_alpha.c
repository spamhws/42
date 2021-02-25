/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:28:20 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/23 08:16:27 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || 
			(str[i] >= 'a' && str[i] <= 'z'))
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
	char* source = "TechieD*elight";

	// Copies the first num characters of source to destination
	printf("%d", ft_str_is_alpha(source));

	return 0;
}