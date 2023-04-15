/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:28:56 by abastida          #+#    #+#             */
/*   Updated: 2023/03/06 18:24:13 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//esta funcion me sirve para printear la lista que voy creando, el nodo anterior y el siguiente.
//Gracias Sebas!!

/*void print_list(t_node **a, t_node **b)
{
	t_node *temp_a;
	t_node *temp_b;
	
	temp_a = *a;
	temp_b = *b;

	while(temp_a != NULL)
	{
		printf("Valor de la lista A: %d || index:%d\n", temp_a->value, temp_a->index);
		temp_a = temp_a->next;
	}
	temp_a = ft_last_list(a);
	printf("--------Prev--------\n");
	while(temp_a != NULL)
	{
		printf("Valor de la lista A del reves: %d || index: %d || length: %d\n", temp_a->value, temp_a->index, temp_a->length_list);
		temp_a = temp_a->prev;
	}
	printf("----------------------\n");

	while(temp_b != NULL)
	{
		printf("Valor de la lista B: %d || index:%d\n", temp_b->value, temp_b->index);
		temp_b = temp_b->next;
	}
	temp_b = ft_last_list(b);
	printf("--------Prev--------\n");
	while(temp_b != NULL)
	{
		printf("Valor de la lista B del reves: %d || index: %d || length: %d\n", temp_b->value, temp_b->index, temp_b->length_list);
		temp_b = temp_b->prev;
	}
	printf("----------------------\n");
}*/

int	main(int ac, char **av)
{
	t_node *a;
	t_node *b;

	if(ac < 2)
		exit(0);
	else
	{
		checking_error(av, ac);
		a = create_list(av);
		b = NULL;
		if(ac == 3)
			if_two(&a);
		if(ac == 4)
			if_three(&a);
		if(ac > 4 && ac <= 6)
			if_five(&a, &b);
		if(ac > 7 && ac <= 101)
			if_hundred(&a, &b, 5);
		if(ac >= 102)
			if_hundred(&a, &b, 8);
		free_node(&a);
	}
	return(0);
}

