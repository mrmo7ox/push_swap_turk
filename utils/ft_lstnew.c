/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:05:21 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/17 10:01:19 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_lstnew(int value)
{
	t_node	*t_list;

	t_list = malloc(sizeof(t_node));
	if (t_list == NULL)
		return (NULL);
	t_list->value = value;
	t_list->rank = 0;
	t_list->next = NULL;
	return (t_list);
}
