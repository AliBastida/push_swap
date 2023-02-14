/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:28:56 by abastida          #+#    #+#             */
/*   Updated: 2023/02/12 11:07:33 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//esta funcion me sirve para printear la lista que voy creando, el nodo anterior y el siguiente.
//Gracias Sebas!!

void print_list(t_node **a, t_node **b)
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

}
int	main(int ac, char **av)
{
	t_node *a = NULL;
	t_node *b = NULL;

	if(ac < 2)
		exit(0);
	else
	{
		checking_error(av, ac);
		a = create_list(av);
		b = create_list(av);
		print_list(&a, &b);
		ft_push(&a, &b);
		print_list(&a, &b);
		//print_list(&b);
	}
	return(0);
}

