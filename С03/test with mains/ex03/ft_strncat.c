/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:06:24 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/24 13:15:42 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *ptr; 

	ptr = dest + ft_strlen(dest);
	
	while (*src != '\0' && nb--)
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';
	return dest;
}

int main()
{
	char dest[30];
	strcpy(dest, "oh hello there, ");

	char src[] = "I am being added to another string ";

	ft_strncat(dest, src, 16);

	puts(dest);

	return 0;
}



