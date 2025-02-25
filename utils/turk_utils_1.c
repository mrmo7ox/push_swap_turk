/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:45:34 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/25 21:02:21 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	other_cases_a(t_node **a, t_node **b, t_node *low)
{
	int	median_a;
	int	median_b;

	median_a = ft_lstsize(*a) / 2;
	median_b = ft_lstsize(*b) / 2;
	if (low->index < median_a)
		while (low->index)
			ra(a, 1);
	else
		while (low->index)
			rra(a, 1);
	if (low->target->index < median_b)
		while (low->target->index)
			rb(b, 1);
	else
		while (low->target->index)
			rrb(b, 1);
}

t_node	*biggest_node(t_node *stack)
{
	t_node	*current;
	t_node	*biggest;

	if (ft_lstsize(stack) == 0)
		return (NULL);
	current = stack;
	biggest = current;
	current = current->next;
	while (current)
	{
		if (biggest->value < current->value)
			biggest = current;
		current = current->next;
	}
	return (biggest);
}

void	make_low_target(t_node *node, t_node *stack)
{
	t_node	*current;
	t_node	*biggest;

	current = stack;
	node->target = NULL;
	biggest = biggest_node(stack);
	while (current)
	{
		if (current->value < node->value)
		{
			if (node->target == NULL)
				node->target = current;
			else
			{
				if (node->value - node->target->value
					> node->value - current->value)
					node->target = current;
			}
		}
		current = current->next;
	}
	if (node->target == NULL)
		node->target = biggest;
}

void	assign_a_targets(t_node **stack_a, t_node **b)
{
	t_node	*current;

	current = *stack_a;
	while (current)
	{
		make_low_target(current, *b);
		current = current->next;
	}
}

t_node	*smallest_node(t_node **stack)
{
	t_node	*current;
	t_node	*smallest;

	if (ft_lstsize(*stack) == 0)
		return (NULL);
	current = *stack;
	smallest = current;
	current = current->next;
	while (current)
	{
		if (smallest->value > current->value)
			smallest = current;
		current = current->next;
	}
	return (smallest);
}
