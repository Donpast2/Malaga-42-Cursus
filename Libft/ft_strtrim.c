/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:32:08 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/06 18:40:53 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_strchr.c"
#include "ft_substr.c"
#include "ft_memcpy.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = 0;
	end = 0;
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = start;
	while (s1[end])
	{
		end++;
	}
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	int len = end - start;
	char *dest = (char *)malloc(len + 1);
    if (dest == NULL)
	{
        return (NULL);
	}

    ft_memcpy(dest, s1 + start, len);
    dest[len] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str[] = "dfdfdfddddddffdProgramming is fascinatingffdfddddfffd";
	char	set[] = "df";
	char	*result = ft_strtrim(str, set);

	if (result)
	{
		printf("After trimming our sentence is: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error: we couldn't trim our string");
	}
	return (0);
}*/
