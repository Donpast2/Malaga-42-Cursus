/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:35:52 by jblanco-          #+#    #+#             */
/*   Updated: 2024/04/10 10:27:17 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c = '7';

	if (isdigit(c))
	{
		printf("Character %c is a digit. \n", c);
	}
	else
	{
		{
			printf("Character %c is not a digit. \n", c);
		}
	}
	return (0);
}*/
