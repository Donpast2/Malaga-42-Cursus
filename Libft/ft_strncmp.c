/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:50:35 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/01 14:20:55 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
	}
}

/*int	main(void)
{
	const char	*str1 = "Hiii";
	const char	*str2 = "Hiiiii";
	int	result = ft_strncmp(str1, str2, 5);
	
	printf("Solution from comparison is:%d\n", result);
	
	return (0);
}*/
