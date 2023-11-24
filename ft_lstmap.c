/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:44:16 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/11/24 22:07:13 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static t_list	*ft_lstnewdup(void *content)
{
	t_list	*n;

	n = malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->content = ft_strdup(content);
	if (!n->content)
	{
		free(n);
		return (NULL);
	}
	n->next = NULL;
	return (n);
}

void	print_content(void *content)
{
	if (content != NULL)
	{
		printf("%s\n", (char *)content);
	}
}

void	ft_del(void *content)
{
	free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	n = ft_lstnewdup(f(lst->content));
	if (!n)
		return (NULL);
	tmp = n;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnewdup(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&n, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (n);
}

int main()
{
	t_list *n;
	t_list *n2;
	t_list *n3;
	char *str = "Hello World n1";
	char *str2 = "Hello World n2";
	char *str3 = "Hello World n3";

	n = ft_lstnewdup(str);
	n2 = ft_lstnewdup(str2);
	n3 = ft_lstnewdup(str3);
	ft_lstadd_front(&n, n2);
	ft_lstadd_front(&n, n3);
	ft_lstmap(n, print_content, ft_del);
	return (0);
} */