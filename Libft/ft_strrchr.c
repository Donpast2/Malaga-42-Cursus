/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:21:20 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/15 13:33:03 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_appearance = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			last_appearance = s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last_appearance);
}

/*int	main(void)

{
	const char	*str = "Hello Moon";
	char	*ptr = ft_strrchr(str, 'o');

	if (ptr != NULL)
	{
		printf("Found 'o' at position: %ld\n", ptr - str);
	}
	else
	{
		printf("Character not found\n");
	}
	return (0);
}*/
