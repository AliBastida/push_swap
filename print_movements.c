/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_movements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:32:31 by abastida          #+#    #+#             */
/*   Updated: 2023/02/14 12:32:31 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_s(t_node **list, char c)
{
	if(c == 'a')
	{
		ft_swap(list);
		ft_printf("sa\n");
	}

	if(c == 'b')
	{
		ft_swap(list);
		ft_printf("sb\n");
	}
}

void  print_sa_sb(t_node **list_a, t_node **list_b)
{
	ft_swap(list_a);
	ft_swap(list_b);
	ft_printf("ss\n");
}
