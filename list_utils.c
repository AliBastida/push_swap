/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:16:30 by abastida          #+#    #+#             */
/*   Updated: 2023/02/13 11:16:30 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(char **av)
{
	int		i;
	t_node	*temp;

	i = 0;
	temp = (t_node *)malloc(sizeof(t_node));
	if (!temp)
		return (NULL);
	temp->value = ft_atoi(av[i]);
	temp->next = NULL;
	temp->prev = NULL;
	return (temp);
}

t_node	*ft_last_list(t_node **a)
{
	t_node	*last;

	last = *a;
	while (last && last->next != NULL)
		last = last->next;
	return (last);
}

void	add_back(t_node *new, t_node **a)
{
	t_node	*temp_node;

	temp_node = *a;
	if (*a == NULL)
		*a = new;
	else
	{
		temp_node = ft_last_list(a);
		temp_node->next = new;
		new->prev = temp_node;
	}
}

int	is_ordered(t_node **list)
{
	t_node	*tmp;

	tmp = *list;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	find_position(t_node **list)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *list;
	while (tmp)
	{
		if (find_min_index (list) == tmp->index)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (0);
}
