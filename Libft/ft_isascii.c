/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:55:55 by jblanco-          #+#    #+#             */
/*   Updated: 2024/04/10 10:41:36 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c = '/';

	if (isascii(c))
	{
		printf("Character %c is ascii.", c);
	}
	else
	{
		{
			printf("Character %c is not ascii.", c);
		}
	}
	return (0);
}*/
