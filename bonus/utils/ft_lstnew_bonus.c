/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:05:21 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/17 10:04:43 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_node	*ft_lstnew_bonus(int value, int rank)
{
	t_node	*t_list;

	t_list = malloc(sizeof(t_node));
	if (t_list == NULL)
		return (NULL);
	t_list->value = value;
	t_list->rank = rank;
	t_list->next = NULL;
	return (t_list);
}
