/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:10:24 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/11/24 21:28:44 by gmatos-n         ###   ########.fr       */
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

void	ft_del(void *content)
{
	free(content);
} */

void	ft_lstdelone(t_list *lst, void (*del)(void	*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/* int main()
{
	t_list *n;
	t_list *n2;
	t_list *n3;
	t_list *tmp;
	char *str = "Hello World n1";
	char *str2 = "Hello World n2";
	char *str3 = "Hello World n3";

	n = ft_lstnewdup(str);
	n2 = ft_lstnewdup(str2);
	n3 = ft_lstnewdup(str3);
	ft_lstadd_front(&n, n2);
	ft_lstadd_front(&n, n3);
	printf("%s\n", (char *)n->content);
	tmp = n->next;
	ft_lstdelone(n, ft_del);
	n = tmp;
	printf("%s\n", (char *)n->content);
	return (0);
} */
