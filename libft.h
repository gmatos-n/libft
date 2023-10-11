/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:32 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/11 18:19:08 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//Functions Part 1 - Libc functions
void		ft_bzero(void *s, size_t n);
int			ft_isdigit(int c);
char		*ft_strdup(const char *src);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dest, const char *src, unsigned int size);

//Functions Part 2 - Additional functions
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif