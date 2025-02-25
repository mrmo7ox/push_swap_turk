/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:05:21 by moel-oua          #+#    #+#             */
/*   Updated: 2025/02/25 17:48:59 by moel-oua         ###   ########.fr       */
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

t_ops	*ft_lstnew_ops_bonus(char *content)
{
	t_ops	*t_list;

	t_list = malloc(sizeof(t_ops));
	if (t_list == NULL)
		return (NULL);
	t_list->content = ft_strdup(content);
	t_list->next = NULL;
	free(content);
	return (t_list);
}
