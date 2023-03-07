/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:21:38 by abastida          #+#    #+#             */
/*   Updated: 2023/03/06 18:27:09 by abastida         ###   ########.fr       */
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
	n = tmp->length_list;
	if(tmp->index == n)
		return(tmp->value);
	tmp = tmp->next;
	return(0);
}

void if_is_two(t_node **list)
{
	t_node *new;

	new = *list;
	if(new->index > new->next->index)
		print_s(list, 'a');
}

void if_is_three(t_node **list)
{
	t_node *tmp;
	t_node *last;
	int min;
	int max;

	tmp = *list;
	last = ft_last_list(list);
	min = find_min_index(list);
	max = find_max_index(list);
	while(is_ordered(list) == 0)
	{
		if(tmp->index == max && tmp->next->index == min)
			print_r(list, 'a');
		else if(last->index == min && last->prev->index == max)
			print_rr(list, 'a');
		else
			print_s(list, 'a');
	}
}

