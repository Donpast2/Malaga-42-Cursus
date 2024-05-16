/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:25:53 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/08 12:28:47 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	y;
	char	*sub;

	x = 0;
	y = 0;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	if (!s || start >= ft_strlen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	while (x < len && s[start + x])
	{
		sub[y] = s[start + x];
		x++;
		y++;
	}
	sub[y] = '\0';
	return (sub);
}

/*int main(void)
{
    const char *str = "Hello, world!";
    unsigned int start = 5;
    size_t len = 6;

    char *result = ft_substr(str, start, len);

    if (result)
    {
        printf("Substring: %s\n", result);
    }
    else
    {
        printf("Error: Memory wasn't assignable to the substring.\n");
    }
	free(result);
	
	return (0);
}*/
