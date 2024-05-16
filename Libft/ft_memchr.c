/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:10:29 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/01 13:52:59 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = s;
	uc = c;
	while (n-- != 0)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "Hello, world!";
	char	*result;
	size_t	length = 0;
	while (str[length] != '\0')
	{
		length++;
		result = ft_memchr(str, 'o', length);
	}
	if (result != NULL)
	{
		printf("Byte 'o' was found at position %ld\n", result - str);
	}
	else
	{
		printf("Byte 'o' wasn't found in the string.\n");
	}
	return (0);
	}*/
