/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:27:21 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/09 18:27:22 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			size_all;
	size_t			i;
	void			*out;
	unsigned char	*cpy_out;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	i = 0;
	size_all = nmemb * size;
	out = malloc(size_all);
	if (out == NULL)
		return (NULL);
	cpy_out = out;
	ft_memset(out, 0, size_all);
	return (out);
}

// int	main(void)
// {
//         int size = 8539;

//         void * d1 = ft_calloc(size, sizeof(int));
//  }
