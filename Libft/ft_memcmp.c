/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:32:59 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/01 13:59:19 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	const unsigned char	*d;

	i = 0;
	s = (const unsigned char *)s1;
	d = (const unsigned char *)s2;
	while (i < n)
	{
		if (s[i] != d[i])
		{
			return ((unsigned char)s[i] - (unsigned char)d[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	source[20] = "This is";
	char	target[20] = "This is fish";
	int	result;

	result = ft_memcmp(source, target, 8);

	if (result == 0)
	{
		printf("Chains are equal.\n");
	}
	else if (result < 0)
	{
		printf("Chain source is less than chain target.\n");
	}
	else if (result > 0)
	{
		printf("Chain source is greater than chain target.\n");
	}
	return (0);
}*/
