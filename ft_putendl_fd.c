/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:00:33 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/12 21:00:46 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd (s, fd);
	ft_putchar_fd ('\n', fd);
}

/* int main()
{
	char *s = "Hello";
	int fd = 1;

	ft_putendl_fd(s, fd);
	return 0;
} */