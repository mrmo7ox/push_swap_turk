/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:48:36 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/25 21:09:51 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	not_sorted(t_node **stack)
{
	t_node	*current;

	current = (*stack);
	while (current)
	{
		if (current->next != NULL)
		{
			if (current->value > current->next->value)
				return (1);
		}
		current = current->next;
	}
	return (0);
}

void	set_position(t_node *stack)
{
	t_node	*current;
	int		i;

	i = 0;
	current = stack;
	while (current)
	{
		current->index = i;
		i++;
		current = current->next;
	}
}

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
