/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:50:43 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/01 14:16:59 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_memcpy.c"

char	*ft_strdup(const char *s1)
{
	size_t	length;
	char	*ptr;

	length = ft_strlen(s1);
	ptr = malloc(length + 1);
	if (s1 == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memcpy(ptr, s1, length + 1);
	return (ptr);
}

/*int	main(void)
{
	const char	*original = "Hello, world!";
    char	*duplicated = ft_strdup(original);
	
	if (duplicated != NULL)
	{
		printf("Cadena original: %s\n", original);
		printf("Cadena duplicada: %s\n", duplicated);
		free(duplicated);
	}
	else
	{
		printf("Error: no se pudo duplicar la cadena.\n");
	}
	return (0);
}*/
