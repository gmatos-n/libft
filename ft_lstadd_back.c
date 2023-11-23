/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:36:03 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/11/23 20:43:34 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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
	ft_lstadd_back(&n, n2);
	ft_lstadd_back(&n, n3);
	printf("%s\n", (char *)n->content);
	printf("%s\n", (char *)n->next->content);
	printf("%s\n", (char *)n->next->next->content);
	return (0);
} */
