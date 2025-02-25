/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:25:30 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/25 21:17:48 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	from_a_to_b(t_node **a, t_node **b)
{
	t_node	*low;
	int		median_a;
	int		median_b;

	low = lowest_cost(a);
	median_a = ft_lstsize(*a) / 2;
	median_b = ft_lstsize(*b) / 2;
	while (low->index || low->target->index)
	{
		if (low->index >= median_a && low->target->index >= median_b)
			rev_rotate_a(a, b, low);
		else if (low->index < median_a && low->target->index < median_b)
			rotate_a(a, b, low);
		else
			other_cases_a(a, b, low);
	}
	pb(b, a, 1);
}

void	from_b_to_a(t_node *node, t_node **a, t_node **b)
{
	int	median_a;

	median_a = ft_lstsize(*a) / 2;
	if (node->target->index < median_a)
		while (node->target->index)
			ra(a, 1);
	else
		while (node->target->index)
			rra(a, 1);
	pa(a, b, 1);
}

void	top_b_target(t_node *node, t_node **b)
{
	t_node	*current;
	t_node	*lowest;

	current = *b;
	lowest = smallest_node(b);
	node->target = NULL;
	while (current)
	{
		if (current->value > node->value)
		{
			if (node->target == NULL)
				node->target = current;
			else
			{
				if (node->value - node->target->value
					< node->value - current->value)
					node->target = current;
			}
		}
		current = current->next;
	}
	if (node->target == NULL)
		node->target = lowest;
}

void	make_lowest_first(t_node **a)
{
	t_node	*node;
	int		median;

	median = ft_lstsize(*a) / 2;
	node = smallest_node(a);
	if (node->index <= median)
		while (node->index)
			ra(a, 1);
	else
		while (node->index)
			rra(a, 1);
}

void	sort(t_node **a, t_node **b)
{
	t_node	*current;

	pb(b, a, 1);
	pb(b, a, 1);
	while (ft_lstsize(*a) > 3)
	{
		assign_a_targets(a, b);
		push_costs(a, b);
		from_a_to_b(a, b);
	}
	sort_three(a);
	while (ft_lstsize(*b))
	{
		current = *b;
		top_b_target(current, a);
		from_b_to_a(current, a, b);
	}
	make_lowest_first(a);
}
