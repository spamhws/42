/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:28:20 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/22 15:23:40 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	if (dest == NULL)
		return NULL;
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return ptr;
}

// Implement strcpy function in C
int		main(void)
{
	char* source = "Techie Delight";
	char destination[20];

	size_t num = 6;

	// Copies the first num characters of source to destination
	printf("%s", ft_strncpy(destination, source, num));

	return 0;
}