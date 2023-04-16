/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:13:00 by abastida          #+#    #+#             */
/*   Updated: 2023/04/16 14:17:18 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*En esta funcion busco el indice mas pequeno. Primero en la mitad inferior 
 * y luego en la superior. En la inferior me ayudo de la distancia que hay 
 * entre la posicion y el final de la lista para saber cuantas veces he de
 * hacer el rr y en la sup de cuantas veces 
 * me he movido en la lista hasta encontrarlo*/

void	find_and_move_min(t_node **list_a, t_node **list_b)
{
	int		pos;
	int		half_length;
	int		times_rr;

	pos = find_position(list_a);
	half_length = new_length_list(list_a) - pos;
	times_rr = new_length_list(list_a) - pos;
	while (pos > half_length && times_rr != 0)
	{
		print_rr(list_a, 'a');
		times_rr--;
	}
	while (pos <= half_length && pos != 0)
	{
		print_r(list_a, 'a');
		pos--;
	}
	print_push(list_a, list_b, 'b');
}

int	new_length_list(t_node **list)
{
	t_node	*tmp;
	int		length;

	tmp = *list;
	length = 0;
	while (tmp)
	{
		tmp = tmp->next;
		length++;
	}
	return (length);
}
/*esta funcion mira el primer elemento de la lista b y 
 * comprueba si es el tercer num mayor, para que en ese caso 
 * pushear a stack a y bajarlo al final de la lista. 
 * Si no lo encuentra, mira si el primer elemento de b es el segundo 
 * mas grande, para que si lo es, pushear a stack a, y si ninguna 
 * de esas condiciones se cumple, baja el numero para volver 
 * a analizar el primer elemnto */

void	sort_upper_half(t_node **list_a, t_node **list_b)
{
	if ((*list_b)->index == find_max_index(list_b) - 2)
	{
		print_push(list_b, list_a, 'a');
		print_r(list_a, 'a');
	}
	else if ((*list_b)->index == find_max_index(list_b) - 1)
		print_push(list_b, list_a, 'a');
	else
		print_r(list_b, 'b');
}

/*esta funcion comprueba si el primer elemento de b es el 
 * segundo mayor para en ese caso pushear al stack a,
 * si no, hace rr*/

void	sort_lower_half(t_node **list_a, t_node **list_b)
{
	if ((*list_b)->index == find_max_index(list_b) - 1)
		print_push(list_b, list_a, 'a');
	print_rr(list_b, 'b');
}

/*esta es la que hace la magia final. 
 * Si el segundo elemento es menor que el primero, 
 * los intercambia para que queden en orden decreciente y 
 * luego comprueba si el ultimo es menor que el primero 
 * para entonces subirlo a la primera posicion*/
void	final_sort(t_node **list_a)
{
	if ((*list_a)->next && (*list_a)->index > (*list_a)->next->index)
		print_s(list_a, 'a');
	if ((ft_last_list(list_a))->index < (*list_a)->index)
		print_rr(list_a, 'a');
}
