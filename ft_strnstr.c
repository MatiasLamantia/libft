/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:51:29 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/05 13:51:30 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (big[x] == '\0' || len == 0)
		return (0);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			x = 0;
			while (little[x] != '\0' && big[i + x] == little[x] && (i
					+ x) < len)
				x++;
			if (little[x] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int main() {
//     const char *big = "the world of C programming.";
//     const char *little = "world";
//     size_t len = 9;

//     // Prueba 1: Encontrar "world" dentro de la cadena 'big'
//     char *result = strnstr(big, little, len);
//     if (result)
//         printf("Resultado 1: Se encontró '%s' en: '%s'\n", little, result);
//     else
//         printf("Resultado 1: No se encontró '%s' en la cadena.\n", little);

// }
