/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:37:02 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/01 13:39:31 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			bytes_traveled;

	ptr = (unsigned char *)s;
	bytes_traveled = 0;
	while (bytes_traveled < n)
	{
		*ptr = 0;
		ptr++;
		bytes_traveled++;
	}
}

/*int	main(void)
{
	char	buffer[10];

	ft_bzero(buffer, 4);
	printf("Buffer content after applying ft_bzero: ");
	for (size_t	i = 0; i < sizeof(buffer); i++)
	{
		printf("%d", buffer[i]);
	}
	printf("\n");

	return (0);
}*/
