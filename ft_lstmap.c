/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:44:16 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/11/29 19:51:34 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void *append_mapped(void *content)
{
    char *original = (char *)content;
    char *new_str;
    if (original == NULL)
        return NULL;

    new_str = malloc(strlen(original) + strlen(" Mapped") + 1);
    if (new_str == NULL)
        return NULL;

    strcpy(new_str, original);
    strcat(new_str, " Mapped");
    return new_str;
}

void	ft_del(void *content)
{
	free(content);
} */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
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
	printf("%s\n", (char *)n->content);
	printf("%s\n", (char *)n->next->content);
	printf("%s\n", (char *)n->next->next->content);
	t_list *newlst = ft_lstmap(n, append_mapped, ft_del);
	printf("%s\n", (char *)newlst->content);
	printf("%s\n", (char *)newlst->next->content);
	printf("%s\n", (char *)newlst->next->next->content);
	return (0);
} */
