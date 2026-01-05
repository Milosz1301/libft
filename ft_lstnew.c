/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstawski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:21:47 by mstawski          #+#    #+#             */
/*   Updated: 2025/09/05 12:00:48 by mstawski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newNode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newNode);
}

/*int	main(void)
{
	int	XD;
	t_list	*showcase;

	XD = 42;
	showcase = ft_lstnew(&XD);
	printf("%i", *(int *)showcase->content);
}*/
