/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:01:11 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/07 11:48:37 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		x;
	int		y;

	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	x = 0;
	y = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		dest[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		dest[x] = s2[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1[] = "Something else is happening:";
	char	str2[] = " My life is hard.";
	char	*result = ft_strjoin(str1, str2);

	printf("After ft_strjoin application: %s\n", result);
	free(result);
	return (0);
}*/
