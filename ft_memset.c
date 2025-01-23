/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:10:09 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/02 16:10:10 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*out;
	size_t			i;

	out = s;
	i = 0;
	while (i < n)
	{
		out[i] = c;
		i++;
	}
	s = out;
	return (s);
}

// int main() {
//     char arr[10];
//     memset(arr, 'A', 5);
//     arr[5] = '\0';
//     printf("%s\n", arr);
//     memset(arr, 'B', 10);
//     printf("%s\n", arr);
//     return (0);
// }
