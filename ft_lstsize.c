/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:49:21 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/18 15:49:22 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i + 1);
}

// int	main (void)
// {
// 	t_list *elem;
// 	t_list *elem2;
// 	t_list *elem3;
// 	t_list *elem4;

// 	elem = NULL;
// 	elem2 = NULL;
// 	elem3 = NULL;
// 	elem4 = NULL;

// 	int c;
// 	elem->next = elem2;
//     elem2->next = elem3;
//     elem3->next = elem4;
//     c = ft_lstsize(elem) + 48;
//     write(1, &c, 1);
//     write(1, "\n", 1);
// }