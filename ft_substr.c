/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:25:51 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/10 13:25:52 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	out = malloc(len + 1);
	if (!out)
		return (0);
	if (start >= ft_strlen(s))
	{
		out[0] = '\0';
		return (out);
	}
	while (i < len && s[start + i] != '\0')
		out[x++] = s[start + i++];
	out[x] = '\0';
	return (out);
}

// int	main(void)
// {
// 	printf("%s",ft_substr("aaaHolaaa", 0, 0));
// }
