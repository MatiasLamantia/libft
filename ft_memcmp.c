/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:29:25 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/05 13:29:27 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*copy_s1;
	unsigned char	*copy_s2;

	if (n == 0)
		return (0);
	copy_s1 = (unsigned char *)s1;
	copy_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (copy_s1[i] != copy_s2[i])
			return (copy_s1[i] - copy_s2[i]);
		i++;
	}
	return (0);
}

// int main() {

//     printf(" %d\n", ft_memcmp("abcdefgh", "abcdwxyz", 6));
//     return (0);
// }