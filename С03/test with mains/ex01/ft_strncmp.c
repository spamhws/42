/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:06:24 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/24 11:40:28 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 1;
	while(*s1 && i < n)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

int main()
{
	char *Y = "Techie";
	char *X = "Tech";

	int ret = ft_strncmp(X, Y, 5);

	if (ret > 0)
		printf("%s", "X is greater than Y\n");
	else if (ret < 0)
		printf("%s", "X is less than Y\n");
	else
		printf("%s", "X is equal to Y\n");

	return 0;
}