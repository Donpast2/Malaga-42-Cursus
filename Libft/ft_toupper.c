/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:35:31 by jblanco-          #+#    #+#             */
/*   Updated: 2024/04/17 13:20:18 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

/*int	main(void)
{
	char	lowercase = 'a';
    char	uppercase = ft_toupper(lowercase);
	
	printf("Lowercase: %c\nUppercase: %c\n", lowercase, uppercase);
	
	return (0);
}*/
