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

void print_list(t_node **a)
{
	t_node *temp;
	
	temp = *a;

	while(temp != NULL)
	{
		printf("Valor del nodo: %d || index:%d\n", temp->value, temp->index);
		temp = temp->next;
	}
	temp = ft_last_list(a);
	printf("--------Prev--------\n");
	while(temp != NULL)
	{
		printf("Valor del nodo: %d || index: %d || length: %d\n", temp->value, temp->index, temp->length_list);
		temp = temp->prev;
	}
}
int	main(int ac, char **av)
{
	t_node *a = NULL;

	if(ac < 2)
		exit(0);
	else
	{
		checking_error(av, ac);
		a = create_list(av);
		print_list(&a);
	}
	return(0);
}

