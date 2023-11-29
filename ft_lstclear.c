/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:27:22 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/11/29 19:45:34 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_del(void *content)
{
	free(content);
} */

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*n;
	t_list	*tmp;

	n = *lst;
	while (n)
	{
		tmp = n->next;
		ft_lstdelone(n, del);
		n = tmp;
	}
	*lst = NULL;
}

/* int main()
{
	t_list *n;
	t_list *n2;
	t_list *n3;
	char *str = "Hello World n1";
	char *str2 = "Hello World n2";
	char *str3 = "Hello World n3";

	n = ft_lstnew(ft_strdup(str));
	n2 = ft_lstnew(ft_strdup(str2));
	n3 = ft_lstnew(ft_strdup(str3));
	ft_lstadd_front(&n, n2);
	ft_lstadd_front(&n, n3);
	printf("%d\n", ft_lstsize(n));
	ft_lstclear(&n, ft_del);
	printf("%d\n", ft_lstsize(n));
	return (0);
} */
