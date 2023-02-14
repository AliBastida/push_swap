/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:42:05 by abastida          #+#    #+#             */
/*   Updated: 2023/02/13 11:42:05 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	put_index(t_node **list, int i)
{
	t_node *first;
	t_node *moving_to_compare;
	int index;

	first = *list;
	while(first)
	{
		moving_to_compare = *list;
		index = 1;
		while(moving_to_compare)
		{
			if(first->value > moving_to_compare->value)
				index++;
			moving_to_compare = moving_to_compare->next;
		}
		first->length_list = i - 1;
		first->index = index;
		first = first->next;

	}
}

t_node *create_list(char **av)
{
	int i;
	t_node *elem;
	t_node *list;
	
	elem = create_node(&av[1]);
	i = 2;
	while(av[i])
	{
		list = create_node(&av[i]);
		if(!list)
		{
			free(elem);
			exit(1);
		}
		add_back(list, &elem);
		i++;
	}
	put_index(&elem, i);
	return(elem);
}
