/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:54:02 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/16 11:18:43 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// f is the funtion to be applied to each character
// s is the pointer we use for our input string
// we use *ptr to allocate the memory of the resulting string
#include <stdlib.h>
#include <stdio.h>
#include "ft_strlen.c"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*char my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return str - 32;
}

int main()
{
	char str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return 0;
}*/
