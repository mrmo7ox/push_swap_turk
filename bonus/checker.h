/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 11:59:46 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/25 21:20:21 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_stack
{
	int					value;
	int					rank;
	int					index;
	struct s_stack		*next;
}						t_node;

typedef struct s_ops
{
	char				*content;
	struct s_ops		*next;
}						t_ops;

int		not_sorted_bonus(t_node **stack);
void	free_all(t_node **a, t_node **b, t_ops **instructions);
void	verify_and_exec(t_node **a, t_node **b, t_ops **instructions);
void	ft_lstclear_ops_bonus(t_ops **stack);
int		ft_lstsize_ops_bonus(t_ops *head);
t_ops	*ft_lstnew_ops_bonus(char *content);
void	ft_lstadd_back_ops_bonus(t_ops **stack, t_ops *new);
t_ops	*ft_lstlast_ops_bonus(t_ops *head);
void	make_stack_bonus(t_node **a, char **dc, int i);
int		verify_bonus(char *str);
void	execute(char *str, t_node **a, t_node **b);
void	while_loop(t_node **a, t_node **b, t_ops **instructions);
char	*ft_strdup(const char *source);
char	*get_next_line(int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
int		dup_checker_bonus(t_node *a, int n);
void	ft_lstclear_bonus(t_node **stack);
void	handle_error_bonus(t_node **stack, char **res);
void	ft_lstadd_back_bonus(t_node **stack, t_node *new);
long	ft_atoi_bonus(char *str, int i, char **split, t_node **stack);
t_node	*ft_lstlast_bonus(t_node *head);
t_node	*ft_lstnew_bonus(int value, int rank);
int		ft_lstsize_bonus(t_node *head);
char	**ft_split_bonus(char *str, char c, int i, int j);
void	pa_bonus(t_node **a, t_node **b, int print);
void	pb_bonus(t_node **b, t_node **a, int print);
void	rra_bonus(t_node **a, int print);
void	rrb_bonus(t_node **b, int print);
void	rrr_bonus(t_node **a, t_node **b, int print);
void	ra_bonus(t_node **a, int print);
void	rb_bonus(t_node **b, int print);
void	rr_bonus(t_node **a, t_node **b, int print);
void	sa_bonus(t_node **a, int print);
void	sb_bonus(t_node **b, int print);
void	ss_bonus(t_node **a, t_node **b, int print);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	**free_the_split_v2_bonus(char **res);

#endif