/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:23:24 by jblanco-          #+#    #+#             */
/*   Updated: 2024/04/10 10:06:20 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c = 'z';

	if (isalpha(c))
	{
		printf("Character %c is an alphabet letter. \n", c);
	}
	else
	{
		{
			printf("Character %c is not an alphabet letter. \n", c);
		}
	}
	return (0);
}*/
