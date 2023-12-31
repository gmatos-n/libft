/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:01:44 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 21:01:56 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_fd (n / 10, fd);
	c = n % 10 + '0';
	write (fd, &c, 1);
}

/* int main()
{
	int n = -2147483648;
	int fd = 1;

	ft_putnbr_fd(n, fd);
	return 0;
} */