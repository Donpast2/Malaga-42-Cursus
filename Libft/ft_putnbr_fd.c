/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:48:20 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/15 13:34:50 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_print_fd(int n, int fd)
{
	int	res;

	if (n != 0)
	{
		ft_print_fd(n / 10, fd);
		res = n % 10;
		if (res < 0)
		{
			res = -res;
		}
		ft_putchar_fd(res + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
	}
	else if (n == 0)
	{
		ft_putchar_fd('0', fd);
	}
	ft_print_fd(n, fd);
}
