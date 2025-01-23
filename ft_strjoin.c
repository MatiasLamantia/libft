/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:29:08 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/10 16:29:09 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i;
	int		x;
	size_t	lenght;

	i = 0;
	x = 0;
	lenght = ft_strlen(s1) + ft_strlen(s2) + 1;
	out = malloc(lenght * sizeof(char));
	if (!out)
		return (NULL);
	while (s1[i] != '\0')
	{
		out[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		out[i] = s2[x];
		i++;
		x++;
	}
	out[i] = '\0';
	return (out);
}

// int	main(void)
// {
// 	char	*s1 = "Hola";
// 	char	*s2 = " mundo";
// 	printf("%s",ft_strjoin(s1,s2));
// }