/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_movements_continue.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:24:43 by abastida          #+#    #+#             */
/*   Updated: 2023/03/03 14:03:22 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_rr(t_node **list, char c)
{
	if(c == 'a')
	{
		ft_rrotate(list);
		ft_printf("rra\n");
	}
	if(c == 'b')
	{
		ft_rrotate(list);
		ft_printf("rrb\n");
	}
}

void	print_rrotate_both(t_node **list_a, t_node **list_b)
{
	ft_rrotate(list_a);
	ft_rrotate(list_b);
	ft_printf("rrr\n");
}

