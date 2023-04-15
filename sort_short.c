/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:21:38 by abastida          #+#    #+#             */
/*   Updated: 2023/03/22 13:01:11 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_node **list)
{
	t_node *tmp;
	int n;

	tmp = *list;
	n = tmp->index;
	while(tmp)
	{
		if(n > tmp->index)
			n = tmp->index;
		tmp = tmp->next;
	}
	return(n);
}

int	find_max_index(t_node **list)
{
	t_node *tmp;
	int n;
	
	tmp = *list;
	n = 1;
	while(tmp)
	{
		if(n < tmp->index)
			n = tmp->index;
		tmp = tmp->next;
	}
	return(n);
}

void if_two(t_node **list)
{
	t_node *new;

	new = *list;
	if(new->index > new->next->index)
		print_s(list, 'a');
}

void if_three(t_node **list)
{
	t_node *tmp;
	t_node *last;
	int min;
	int max;

	min = find_min_index(list);
	max = find_max_index(list);
	while(!is_ordered(list))
	{
		tmp = *list;
		last = ft_last_list(list);
		if(tmp->index == max && tmp->next->index == min)
			print_r(list, 'a');
		else if(last->index == min && tmp->next->index == max)
			print_rr(list, 'a');
		else
			print_s(list, 'a');
	}
}

void	if_five(t_node **list_a, t_node **list_b)
{
	t_node *tmp;

	tmp = *list_a;;
	while(new_length_list(list_a) > 3)
	{
		find_and_move_min(list_a, list_b);
	}
	if_three(list_a);
	while(new_length_list(list_b) != 0)
		print_push(list_b, list_a, 'a');
}
