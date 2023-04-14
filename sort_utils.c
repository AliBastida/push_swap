/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:13:00 by abastida          #+#    #+#             */
/*   Updated: 2023/03/21 14:13:00 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_and_move_min(t_node **list_a, t_node **list_b)
{
	int pos;
	t_node *tmp;
	int half_length;
	int times_rr;

	tmp = *list_a;
	pos = find_position(list_a);
	half_length = tmp->length_list - pos;
	times_rr = tmp->length_list - pos;
	while(pos > half_length && times_rr != 0)
	{
		print_rr(list_a, 'a');
		times_rr--;
	}
	while(pos <= half_length && pos != 0)
	{
		print_r(list_a, 'a');
		pos--;
	}
	print_push(list_a, list_b, 'b');
}

int	new_length_list(t_node **list)
{
	t_node *tmp;
	int length;

	tmp = *list;
	length = 0;
	while(tmp)
	{
		tmp = tmp->next;
		length++;
	}
	return(length);
}

void	sort_upper_half(t_node **list_a, t_node **list_b)
{
	int pos;
	int length;
	
//	while(*list_b)
//	{
		pos = find_biggest_num(list_b);
		length = new_length_list(list_b);
		if((*list_b)->index == find_max_index(list_b) - 1)
			print_push(list_b, list_a, 'a');
		else
			print_r(list_b, 'b');
		pos--;
//	}
}
