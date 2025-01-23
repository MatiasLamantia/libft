/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:42:16 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/05 12:42:17 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*copy_s;
	unsigned char	copy_c;

	copy_c = (int)c;
	copy_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((int)copy_s[i] == copy_c)
			return ((void *)&copy_s[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     // Crear un bloque de memoria con algunos valores
//     char data[] = { 10, 20, 30, 40, 50, 60, 70 };
//     // Buscar el valor 40 en el bloque de memoria
//     void *result = memchr(data, 40, sizeof(data));
//     if (result != NULL)
//     {
//         printf("Valor 40 encontrado en la posición %ld.\n", 
//(char *)result- data);
//     }
//     else
//     {
//         printf("Valor no encontrado.\n");
//     }
//     return (0);
// }