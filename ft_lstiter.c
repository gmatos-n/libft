/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:42:22 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/11/29 19:23:31 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	print_content(void *content)
{
	if (content != NULL)
	{
		printf("%s\n", (char *)content);
	}
} */

void	ft_lstiter(t_list *lst, void (*f)(void	*))
{
	t_list	*n;

	n = lst;
	while (n)
	{
		f(n->content);
		n = n->next;
	}
}

/* int main()
{
	t_list *n;
	t_list *n2;
	t_list *n3;
	char *str = "Hello World n1";
	char *str2 = "Hello World n2";
	char *str3 = "Hello World n3";

	n = ft_lstnew(str);
	n2 = ft_lstnew(str2);
	n3 = ft_lstnew(str3);
	ft_lstadd_front(&n, n2);
	ft_lstadd_front(&n, n3);
	ft_lstiter(n, print_content);
	return (0);
} */
