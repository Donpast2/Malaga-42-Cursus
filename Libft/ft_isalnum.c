/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:42:39 by jblanco-          #+#    #+#             */
/*   Updated: 2024/04/10 10:35:55 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c = '3';

	if (isalnum(c))
	{
		printf("Character %c is alphanumeric.", c);
	}
	else
	{
		{
			printf("Character %c is alphanumeric.", c);
		}
	}
	return (0);
}*/
