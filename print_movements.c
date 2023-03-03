/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_movements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:32:31 by abastida          #+#    #+#             */
/*   Updated: 2023/03/03 10:32:22 by abastida         ###   ########.fr       */
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

void	print_r(t_node **list, char c)
{
	if(c == 'a')
	{
		ft_rotate(list);
		ft_printf("ra\n");
	}
	if(c == 'b')
	{
		ft_rotate(list);
		ft_printf("rb\n");
	}
}

void	print_rr(t_node **list_a, t_node **list_b)
{
	ft_rotate(list_a);
	ft_rotate(list_b);
	ft_printf("rr\n");
}

void  print_sa_sb(t_node **list_a, t_node **list_b)
{
	ft_swap(list_a);
	ft_swap(list_b);
	ft_printf("ss\n");
}

void	print_push(t_node **to, t_node **from, char c)
{
	if(c == 'a')
	{
		ft_push(to, from);
		ft_printf("pa\n");
	}
	if(c == 'b')
	{
		ft_push(to, from);
		ft_printf("pb\n");
	}
}
