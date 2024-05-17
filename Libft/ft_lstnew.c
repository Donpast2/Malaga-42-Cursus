/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanco- <jblanco-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:55:58 by jblanco-          #+#    #+#             */
/*   Updated: 2024/05/17 12:42:12 by jblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*n_list;

	n_list = (t_list *)malloc(sizeof(t_list));
	if (!n_list)
		return (NULL);
	n_list->content = content;
	n_list->next = NULL;
	return (n_list);
}

/*int	main(void)
{
	char	content[] = "Hola, mundo!";
	t_list	*new_node = ft_lstnew(content);

	if (new_node != NULL)
		printf("Node contains: %s\n", (char *)new_node->content);
	else
		printf("Failure creating node\n");
	free(new_node);
	return (0);
}*/
