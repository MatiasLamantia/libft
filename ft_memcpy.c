/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:36:48 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/03 11:36:51 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*t;
	unsigned const char	*t2;

	t = (unsigned char *)dest;
	t2 = (unsigned const char *)src;
	i = 0;
	if (dest == (void *)0 && src == (void *)0)
		return (ft_strdup(""));
	while (i < n)
	{
		t[i] = t2[i];
		i++;
	}
	return (t);
}
