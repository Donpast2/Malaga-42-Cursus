/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:20:16 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/15 12:47:56 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	negsign;

	i = 0;
	result = 0;
	negsign = 1;
	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negsign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] == - '0') + (result * 10);
		i++;
	}
	return (result * negsign);
}

/*int	main(void)
{
	int	i;
	char	*str;

	str = "-23 87";
	i = ft_atoi(str);

	printf("i = %d\n", i);
}*/
