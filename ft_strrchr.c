/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:54:29 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/03 13:54:31 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*out;

	i = 0;
	out = (char *)s;
	while (out[i] != '\0')
		i++;
	while (out[i] != (char)c && i > 0)
		i--;
	if (out[i] == (char)c)
		return (&out[i]);
	return (0);
}

// int	main(void)
// {
// 	printf("%s", strrchr("Holaoasd", 'o'));
// }