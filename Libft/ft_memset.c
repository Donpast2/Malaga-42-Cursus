/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:23:40 by jblanco-          #+#    #+#             */
/*   Updated: 2024/04/23 12:56:37 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n)
	{
		((unsigned char *)str)[len] = (unsigned char)c;
		len++;
	}
	return (str);
}

/*int	main(void)
{
	char	buffer[20]; // to store data after using memset
    int	c = 'A';
    size_t	n = 6;
	
	// Calling ft_memset to fill buffer
	ft_memset(buffer, c, n);
    printf("Buffer: %s\n", buffer);

    return (0);
}*/
