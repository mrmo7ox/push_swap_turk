/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:48:18 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/25 21:17:26 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int					value;
	struct s_stack		*target;
	int					cost;
	int					index;
	struct s_stack		*next;
}						t_node;

void	make_stack(t_node **a, char **dc, int i);
t_node	*get_max(t_node *stack);
t_node	*get_min(t_node *stack);
int		not_sorted(t_node **stack);
void	set_position(t_node *stack);
char	**ft_split(char *str, char c, int i, int j);
long	ft_atoi(char *str, int i, char **split, t_node **stack);
int		dup_checker(t_node *a, int n);
void	ft_lstclear(t_node **stack);
void	handle_error(t_node **stack, char **res);
t_node	*ft_lstnew(int value);
void	ft_lstadd_back(t_node **stack, t_node *new);
int		ft_lstsize(t_node *head);
t_node	*ft_lstlast(t_node *head);
void	sa(t_node **a, int print);
void	sb(t_node **b, int print);
void	ss(t_node **a, t_node **b, int print);
void	ra(t_node **a, int print);
void	rb(t_node **b, int print);
void	rr(t_node **a, t_node **b, int print);
void	rra(t_node **a, int print);
void	rrb(t_node **b, int print);
void	rrr(t_node **a, t_node **b, int print);
void	pa(t_node **a, t_node **b, int print);
void	pb(t_node **b, t_node **a, int print);
void	sort_three(t_node **a);
void	sort_four(t_node **a, t_node **b);
void	sort_five(t_node **a, t_node **b);
void	handle_five(t_node **a, t_node **b);
char	**free_the_split_v2(char **res);
void	from_a_to_b(t_node **a, t_node **b);
void	sort(t_node **stack_a, t_node **stack_b);
void	other_cases_a(t_node **a, t_node **b, t_node *low);
t_node	*biggest_node(t_node *stack);
void	make_low_target(t_node *node, t_node *stack);
void	assign_a_targets(t_node **stack_a, t_node **b);
t_node	*smallest_node(t_node **stack);
void	push_costs(t_node **a, t_node **b);
void	rev_rotate_a(t_node **a, t_node **b, t_node *low);
void	rotate_a(t_node **a, t_node **b, t_node *low);
t_node	*lowest_cost(t_node **stack);
void	get_rotations(t_node **stack, t_node *node, int *arry);
void	top_b_target(t_node *node, t_node **b);
int		not_sorted(t_node **stack);
void	set_position(t_node *stack);
int		min(int a, int b);
int		max(int a, int b);
t_node	*get_max(t_node *stack);
t_node	*get_min(t_node *stack);

#endif