/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:13:51 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/16 10:13:52 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int	r;

	r = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		r++;
	}
	return (r);
}

static char	*limits(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	else
		return (NULL);
}

static void	is_negative(int *n, int *neg, int *size_n)
{
	if (*n < 0)
	{
		*n = -*n;
		*neg = 1;
		(*size_n)++;
	}
}

char	*ft_itoa(int n)
{
	char	*out;
	char	i;
	int		size_n;
	int		neg;

	size_n = len(n);
	neg = 0;
	i = 0;
	if (limits(n) != NULL)
		return (ft_strdup(limits(n)));
	is_negative(&n, &neg, &size_n);
	out = malloc(size_n + 1);
	if (!out)
		return (NULL);
	out[size_n] = '\0';
	while (size_n-- > 0)
	{
		out[size_n] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		out[0] = '-';
	return (out);
}

// int	main(void)
// {
// 	printf("%s",ft_itoa(-9));
// }