/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:28:05 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/17 13:28:06 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			words++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (s[i - 1] != c && i > 0)
		words++;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		x;
	int		last_cut;

	last_cut = 0;
	x = 0;
	i = 0;
	out = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			last_cut = i;
			while (s[i] && s[i] != c)
				i++;
			out[x++] = ft_substr(s, last_cut, i - last_cut);
		}
		else
			i++;
	}
	out[x] = NULL;
	return (out);
}

// int main(void)
// {
//     char **out;
//     out = ft_split("      split       this for   me  !       ", ' ');
//     return (0);
// }