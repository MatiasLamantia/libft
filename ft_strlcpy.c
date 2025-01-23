/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:05:57 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/03 12:05:58 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlcpy(char *dest, const char *src, size_t size_dest)
{
	size_t	i;

	i = 0;
	if (size_dest == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < size_dest - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char gola[] = "Hola";
// 	printf("%s %d", gola, strlcpy(gola, "Golsa", 2));
// }