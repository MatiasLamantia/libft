/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamanti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:52:45 by mlamanti          #+#    #+#             */
/*   Updated: 2024/12/14 19:52:46 by mlamanti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	num[12];

	i = 0;
	if (n == 0)
		write (fd, "0", 1);
	else if (n < 0)
	{
		write (fd, "-", 1);
		if (n == -2147483648)
		{
			write (fd, "2147483648", 10);
			return ;
		}
		n = -n;
	}
	while (n > 0)
	{
		num[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0)
		write (fd, &num[i], 1);
}
// int	main(void)
// {
// 	ft_putnbr_fd(2, 1);
// }