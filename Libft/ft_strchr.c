/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:43:54 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/01 14:11:52 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "Hello Jack";
	char	*ptr = ft_strchr(str, 'J');
	
	if (ptr != NULL)
	{
		printf("Found 'j' at position: %ld\n", ptr - str);
	}
	else
	{
		printf("Character not found\n");
    }
	return (0);
}*/
