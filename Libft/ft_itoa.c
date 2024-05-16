/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:05:55 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/13 12:53:22 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
	{
		return (1);
	}
	if (number < 0)
	{
		length += 1;
	}
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	number;
	unsigned int	length;

	length = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number != 0)
	{
		string[length - 1] = (number % 10) + '0';
		number = number / 10;
		length--;
	}
	return (string);
}

/*int	main(void)
{
	int	i = 0;
	int	test_numbers[] = {0, 123, -456, 7890, -12345};
    int	num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);
	
	while (i < num_tests)
	{
		int n = test_numbers[i];
		char *result = ft_itoa(n);
		if (result)
		{
			printf("Number: %d, Result: %s\n", n, result);
			free(result);
		}
		else
		{
			printf("Memory allocation failed for number: %d\n", n);
		}
		i++;
	}
	return (0);
}*/
