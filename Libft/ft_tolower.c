/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:34:46 by jblanco-          #+#    #+#             */
/*   Updated: 2024/04/17 13:19:51 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

/*int	main(void)
{
	char	uppercase = 'A';
    char	lowercase = ft_tolower(uppercase);

	printf("Uppercase: %c\nLowercase: %c\n", uppercase, lowercase);

	return (0);
}*/
