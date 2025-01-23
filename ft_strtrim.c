/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:41:03 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/14 17:41:04 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	y;
	char	*out;

	y = 0;
	i = 0;
	if (s1[0] == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]) && len > i)
		len--;
	out = malloc(len - i + 1);
	if (!out)
		return (NULL);
	while (i < len)
		out[y++] = s1[i++];
	out[y] = '\0';
	return (out);
}

// int main(void)
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
// 	printf("%s",ft_strtrim(s1," \n\t"));
// }***********