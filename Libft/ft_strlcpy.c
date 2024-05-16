/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:52:04 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/01 14:18:55 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	c;

	c = 0;
	while (c < dstsize - 1 && src[c] != '\0')
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	return (c);
}

/*int main(void)
{
	char src[] = "Hello world!";
	char dst[15];

    // We have a size limit while copying src to dst
	size_t	len = ft_strlcpy(dst, src, sizeof(dst));
	
	printf("Copied string: %s\n", dst);
	printf("Length of copied string: %zu\n", len);
	return (0);
}*/
