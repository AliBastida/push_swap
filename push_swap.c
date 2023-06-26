/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:28:56 by abastida          #+#    #+#             */
/*   Updated: 2023/04/15 18:09:19 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	if (ac < 2)
		exit(0);
	else
	{
		checking_error(av, ac);
		a = create_list(av);
		b = NULL;
		if (ac == 3)
			if_two(&a);
		if (ac == 4)
			if_three(&a);
		if (ac > 4 && ac <= 6)
			if_five(&a, &b);
		if (ac >= 7 && ac <= 101)
			if_hundred(&a, &b, 5);
		if (ac >= 102)
			if_hundred(&a, &b, 8);
		free_node(&a);
	}
	return (0);
}
