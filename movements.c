/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:13:55 by abastida          #+#    #+#             */
/*   Updated: 2023/02/17 17:50:34 by abastida         ###   ########.fr       */
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

void	ft_push(t_node **to, t_node **from)
{
	t_node *from_first;
	t_node *to_first;

	from_first = *from;
	to_first = *to;
	if(from == NULL)
		return;
	if(from_first)
	{
		if(from_first->next == NULL)
			*from = NULL;
		else
		{
			from_first->next->prev = NULL;
			*from = from_first->next;
		}
		to_first->prev = from_first;
		from_first->next = to_first;
		from_first->prev = NULL;
		*to = from_first;
	}	
}
