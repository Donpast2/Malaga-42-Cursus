/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:59:41 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/02 13:16:17 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	source[] = "This is fish";
	char	target[] = "Hello";

	void	*result = ft_memcpy(target, source, 4);

	ft_memcpy(target, source, 4);

	if (result == NULL)
	{
		printf("Error: There's overlap, it can't be copied.\n");
	}
	else
	{
		printf("Copied bytes: %s\n", target);
	}
	return (0);
}*/
