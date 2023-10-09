/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:20:55 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/09 20:41:24 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (is_whitespace(*str) && *str)
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str) && *str)
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * sign);
}

/* int  main(void)
{
        char *tests[] = {
                "42",
                "   42",
                "-42",
                "0",
                "+42",
                "   -42",
                "0042",
                "   +42",
                "42 is the answer",
                "   42 is the answer",
                "-42 is the answer",
                "+-42",
                "-+42",
                "+-42 is the answer",
                "0000000000000000000042",
                "2147483647",
                "-2147483648",
                NULL};

        for (int i = 0; tests[i]; i++)
        {
                printf("Testing: \"%s\"\n", tests[i]);
                printf("OG atoi: %d\n", atoi(tests[i]));
                printf("42 ft_atoi: %d\n", ft_atoi(tests[i]));
                printf("-----------\n");
        }

        return (0);
} */