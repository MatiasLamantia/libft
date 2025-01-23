/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:39:30 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/09 17:39:31 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destl;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	destl = ft_strlen(dst);
	while (src[i] != '\0' && (destl + i + 1) < size)
	{
		dst[destl + i] = src[i];
		i++;
	}
	dst[destl + i] = '\0';
	return (destl + ft_strlen(src));
}

// int	main(void)
// {
// 		char	*dest;
// 		dest = "r";
//         printf("%zu",ft_strlcat(dest, "lorem ipsum dolor  amet", 2));
// }