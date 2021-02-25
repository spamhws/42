/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:28:20 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/22 18:33:02 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *d = dest;
	const char *s = src;
	int n = size;

	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}
	if (n == 0) {
		if (size != 0)
			*d = '\0';
		while (*s++)
			;
	}

	return(s - src - 1);
}

// Implement strcpy function in C
int		main(void)
{
	char* source = "Techie Delight";
	char destination[20];

	size_t num = 6;

	// Copies the first num characters of source to destination
	printf("%d", ft_strlcpy(destination, source, num));

	return 0;
}
