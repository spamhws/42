/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:28:20 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/22 19:15:56 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int must_cap;

	i = 0;
	must_cap = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (must_cap == 1)
			{
				str[i] = str[i] - 32;
				must_cap = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			must_cap = 0;
		else
			must_cap = 1;
		i++;
	}
	return (str);
}

// Implement strcpy function in C
int		main(void)
{
	char source[] = "salut, cCmment tu vas ? 42mots quarante-deux; cinquante+et+un";

	// Copies the first num characters of source to destination
	printf("%s", ft_strcapitalize(source));

	return 0;
}
