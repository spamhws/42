/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:06:24 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/24 13:40:13 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break ;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main()
{
	char *Y = "Techie";
	char *X = "Tech";

	int ret = ft_strcmp(X, Y);

	if (ret > 0)
		printf("%s", "X is greater than Y");
	else if (ret < 0)
		printf("%s", "X is less than Y");
	else
		printf("%s", "X is equal to Y");

	return 0;
}