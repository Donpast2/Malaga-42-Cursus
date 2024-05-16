/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:08:25 by jblanco-          #+#    #+#             */
/*   Updated: 2024/04/10 10:56:50 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c = 126;

	if (isprint(c))
	{
		printf("Character %c is printable.", c);
	}
	else
	{
		{
			printf("Character %c is not printable.", c);
		}
	}
	return (0);
}*/
