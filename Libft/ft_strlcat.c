/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:40:33 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/15 13:30:13 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
// In this function, destlen, srclen and full_len for concatenation
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	full_len;
	size_t	i;

	dstlen = 0;
	srclen = 0;
	full_len = 0;
	i = 0;
	full_len = dstlen + srclen;
	while (dstlen < dstsize && dst[dstlen] != '\0')
		dstlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (full_len < dstsize - 1)
	{
		while (src[i] != '\0' && dstlen + i < dstsize - 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	return (full_len);
}

/*int	main(void)
{
    // Giving enough space to a buffer to save concatenated chains
    char	buffer[12] = "Hello ";
	// Source chain
    const char	*src = "Jack";
	// Destination buffer size
    size_t	buffer_size = sizeof(buffer);
	// Calls strlcat function to concatenate src to buffer
	size_t	result_len = ft_strlcat(buffer, src, buffer_size);

    printf("Concatenated chain: %s\n", buffer);
    printf("Full lenght of concatenated chain: %zu\n", result_len);

    return (0);
}*/
