/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:46:53 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/25 21:17:16 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_costs(t_node **a, t_node **b)
{
	t_node	*current;
	int		rotate_a[2];
	int		rotate_b[2];
	int		scenario[3];

	current = *a;
	while (current)
	{
		set_position(*a);
		set_position(*b);
		get_rotations(a, current, rotate_a);
		get_rotations(b, current->target, rotate_b);
		scenario[0] = min(rotate_a[0], rotate_a[1])
			+ min(rotate_b[0], rotate_b[1]);
		scenario[1] = max(rotate_a[0], rotate_b[0]);
		scenario[2] = max(rotate_a[1], rotate_b[1]);
		current->cost = min(scenario[0], min(scenario[1], scenario[2]));
		current = current->next;
	}
}

void	rev_rotate_a(t_node **a, t_node **b, t_node *low)
{
	while (low->index && low->target->index)
		rrr(a, b, 1);
	while (low->index)
		rra(a, 1);
	while (low->target->index)
		rrb(b, 1);
}

void	rotate_a(t_node **a, t_node **b, t_node *low)
{
	while (low->index && low->target->index)
		rr(a, b, 1);
	while (low->index)
		ra(a, 1);
	while (low->target->index)
		rb(b, 1);
}

t_node	*lowest_cost(t_node **stack)
{
	t_node	*current;
	t_node	*lowest;

	current = *stack;
	lowest = current;
	while (current)
	{
		if (current->cost < lowest->cost)
			lowest = current;
		current = current->next;
	}
	return (lowest);
}

void	get_rotations(t_node **stack, t_node *node, int *arry)
{
	arry[0] = node->index;
	arry[1] = ft_lstsize(*stack) - node->index;
}
