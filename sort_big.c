/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:57:38 by abastida          #+#    #+#             */
/*   Updated: 2023/04/12 17:57:38 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_index_chunk(t_node **list_a, int chunk);
/*en esta funcion calculo el limite sup de los chunks y voy buscando los 
 * numeros que pertencen al chunk. Luego actualizo el valor del chunk y 
 * vuelvo a buscar los numeros y asi hasta haber pasado al stack b los numeros
 * ordenados por chunks.Con la ultima linea lo que hago es pasar el numero 
 * a la mitad inferior si el numero es mayor que la mitad del chunk*/

void	order_by_chunks(t_node **list_a, t_node **list_b, int size_chunk)
{
	int	chunk;
	int	i;
	int	half_length;

	chunk = size_chunk;
	while (*list_a)
	{
		i = find_index_chunk(list_a, chunk);
		half_length = new_length_list(list_a) / 2;
		if (i == -1)
		{
			chunk = chunk + size_chunk;
			continue ;
		}
		while (i <= half_length && i-- > 0)
			print_r(list_a, 'a');
		while (i > half_length && i++ < new_length_list(list_a))
			print_rr(list_a, 'a');
		print_push(list_a, list_b, 'b');
		if ((*list_b)->index > chunk - size_chunk / 2
			&& new_length_list(list_b) > 1)
			print_r(list_b, 'b');
	}
}

static int	find_index_chunk(t_node **list_a, int chunk)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *list_a;
	while (tmp)
	{
		if (tmp->index <= chunk)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

int	find_biggest_num(t_node **list_b)
{
	t_node	*tmp;
	int		pos;

	tmp = *list_b;
	pos = 0;
	while (*list_b)
	{
		if (tmp->index == find_max_index(list_b))
			return (pos);
		pos++;
		tmp = tmp->next;
	}
	return (0);
}

void	if_hundred(t_node **list_a, t_node **list_b, int n)
{
	int	pos;
	int	length;

	order_by_chunks(list_a, list_b, new_length_list(list_a) / n);
	while (*list_b)
	{
		pos = find_biggest_num(list_b);
		length = new_length_list(list_b) / 2;
		while (pos <= length && pos != 0)
		{
			sort_upper_half(list_a, list_b);
			pos--;
		}
		while (pos > length && (*list_b)->index != find_max_index(list_b))
		{
			sort_lower_half(list_a, list_b);
			pos++;
		}
		print_push(list_b, list_a, 'a');
		final_sort(list_a);
	}
}
