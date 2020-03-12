/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:22:08 by rrhrara           #+#    #+#             */
/*   Updated: 2019/11/13 18:38:26 by rrhrara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				ft_putendl_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *str, int fd);
int					ft_strlen(char *str);
int					ft_atoi(char *str);
void				ft_putnbr_fd(int nb, int fd);
char				**ft_split(char *str, char charset);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
char				*ft_strdup(char *src);
char				*ft_strjoin(char *s1, char *s2);
unsigned int		ft_strlcat(char *dest, char *str, unsigned int size);
unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);
int					ft_tolower(char c);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
char				*ft_strnstr(char *str, char *to_find, unsigned int n);
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *s, const void *src, size_t n);
int					ft_isalnum(int c);
int					ft_isascii(int c);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
char				*ft_strchr(char *s, char c);
char				*ft_strrchr(char *s, char c);
void				*ft_memchr(const void *s, int c, int n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_calloc(size_t count, size_t size);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)
					(void *), void (*del)(void *));

#endif
