/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:01:34 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/04 17:01:35 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_c;
	unsigned const char	*src_c;

	i = 0;
	dest_c = dest;
	src_c = src;
	if (!src && !dest)
		return (NULL);
	if (dest_c > src_c)
	{
		i = n;
		while (i--)
			dest_c[i] = src_c[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_c[i] = src_c[i];
			i++;
		}
	}
	return (dest_c);
}

// int
// 	main(void)
// // {
// // 	char	*dest;

// // 	dest = "lorem ipsum dolor sit a";
// // 	ft_memmove(dest, "consectetur", 5
// // }