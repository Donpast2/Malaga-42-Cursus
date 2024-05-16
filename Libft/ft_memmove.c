/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:29:23 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/02 13:22:22 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (s < d && s + len > d)
	{
		d += len - 1;
		s += len - 1;
		while (len--)
		{
			*d-- = *s--;
		}
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}

/*int	main(void)
{
	char	source[] = "Hello";
	char	target[] = "Jack!";;

	ft_memmove(target, source, 3);

	printf("Copied chan in inverted way: %s\n", target);

	return (0);
}*/
