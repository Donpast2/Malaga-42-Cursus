/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:46:22 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/17 12:54:46 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cursor;
	int		count;

	count = 0;
	cursor = *lst;
	while (cursor)
	{
		cursor = cursor->next;
		count++;
	}
	return (count);
}
