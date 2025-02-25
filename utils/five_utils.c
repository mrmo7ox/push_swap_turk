/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 21:07:45 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/25 21:08:06 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*get_max(t_node *stack)
{
	t_node	*current;
	t_node	*tmp;

	current = stack;
	tmp = current;
	while (current)
	{
		if (current->value > tmp->value)
			tmp = current;
		current = current->next;
	}
	return (tmp);
}

t_node	*get_min(t_node *stack)
{
	t_node	*current;
	t_node	*tmp;

	current = stack;
	tmp = current;
	while (current)
	{
		if (current->value < tmp->value)
			tmp = current;
		current = current->next;
	}
	return (tmp);
}
