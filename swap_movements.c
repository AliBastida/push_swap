/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_movements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:13:55 by abastida          #+#    #+#             */
/*   Updated: 2023/02/14 10:13:55 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_node **list)
{
	t_node *first_node;
	t_node *second_node;

	first_node = *list;
	second_node = first_node->next;
	if(!first_node->next)
		return;
	if(second_node->next)
	{
		second_node->next->prev = first_node;
		first_node->next = second_node->next;
	}
	else
		first_node->next = NULL;
	second_node->prev = NULL;
	first_node->prev = second_node;
	second_node->next = first_node;
	*list = second_node;
}

void	ft_push(t_node **list_a, t_node **list_b)
{
	t_node *first_a;
	t_node *first_b;

	first_a = *list_a;
	first_b = *list_b;
	if(first_b == NULL)
		return;
	if(first_a->next && first_b)
	{
		if(first_b->next == NULL)
			list_b = NULL;
		else
			first_b->next = first_a;
		first_a->prev = first_b;
		first_b->next = first_a;
		first_a = first_a->next;
		first_b->prev = NULL;
		first_b->next->prev = NULL;
	}
	*list_a = first_b;
}
