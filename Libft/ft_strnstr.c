/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:24:35 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/01 14:23:17 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len >= ft_strlen(needle))
	{
		if (*haystack == *needle & ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*haystack = "Hello, world!";
	const char	*needle = "world";

	char	*result = ft_strnstr(haystack, needle, 15);

	printf("Subchain found: %s\n", result);

	return (0);
}*/
