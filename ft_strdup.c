/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:03:22 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/10 13:03:27 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*out;

	i = 0;
	while (s[i] != '\0')
		i++;
	out = malloc((i + 1) * sizeof(char));
	if (!out)
		return (NULL);
	out[i] = '\0';
	while (i--)
		out[i] = s[i];
	return (out);
}

// int	main(void)
// {
// 	char	*str = "Hola mundo";
// 	printf("%s", ft_strdup(str));
// 	free(str);
// 	return (0);
// }
