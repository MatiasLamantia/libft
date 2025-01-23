/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:53:32 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/05 17:53:33 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	chartoint(const char *nptr, int *out, int i)
{
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		*out = *out * 10 + (nptr[i] - '0');
		i++;
	}
}

int	ft_atoi(const char *nptr)
{
	int	out;
	int	i;
	int	pn;
	int	neg;

	neg = 0;
	pn = 1;
	i = 0;
	out = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (neg == 1)
			return (0);
		neg = 1;
		if (nptr[i] == '-')
			pn = -1;
		i++;
	}
	chartoint(nptr, &out, i);
	out = out * pn;
	return (out);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi("--3"));
// 	return (0);
// }
