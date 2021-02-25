/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanko <ysanko@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:06:24 by ysanko            #+#    #+#             */
/*   Updated: 2021/02/24 11:58:42 by ysanko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	// make ptr point to the end of dest string
	char *ptr; 

	ptr = dest + ft_strlen(dest);

	// Appends characters of src to the dest string
	while (*src != '\0')
		*ptr++ = *src++;

	// null terminate dest string
	*ptr = '\0';

	// dest is returned by standard strcat()
	return dest;
}

int		main()
{
	char* str = (char*)calloc(100, 1);

	ft_strcat(str, "This ");
	ft_strcat(str, "is  ");
	ft_strcat(str, "my ");
	ft_strcat(str, "new ");
	ft_strcat(str, "concatinated ");
	ft_strcat(str, "string!");

	puts(str);

	return 0;
}