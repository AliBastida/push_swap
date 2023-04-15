/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:01:07 by abastida          #+#    #+#             */
/*   Updated: 2023/03/06 18:19:29 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	int value;
	int index;
	int length_list;
	struct s_node *next;
	struct s_node *prev;
}t_node;

//push_swap.c//
int main(int ac, char **av);
void	print_list(t_node **a, t_node **b);

//list_utils.c//
t_node *create_node(char **av);
void	add_back(t_node *elem, t_node **a);
t_node *ft_last_list(t_node **a);
int	is_ordered(t_node **list);
int	find_position(t_node **list);

//sort_utils.c//
void	find_and_move_min(t_node **list_a, t_node **list_b);
int		new_length_list(t_node **list);
void	sort_upper_half(t_node **list_a, t_node **list_b);
void	sort_lower_half(t_node **list_a, t_node **list_b);
void	final_sort(t_node **list_a);

//init.c//
void	put_index(t_node **list, int i);
t_node	*create_list(char **av);
void	free_node(t_node **list);

//movements.c//
void	ft_swap(t_node **list);
void	ft_push(t_node **list_a, t_node **list_b);
void	ft_rotate(t_node **list);
void	ft_rrotate(t_node **list);

//print_movements//
void	print_s(t_node **list, char c);
void	print_sa_sb(t_node **list_a, t_node **list_b);
void	print_push(t_node **from, t_node **to, char c);
void	print_r(t_node **list, char c);
void	print_reverse_both(t_node **list_a, t_node **list_b);

//print_movements_continue//
void	print_rr(t_node **list, char c);
void	print_rrotate_both(t_node **list_a, t_node **list_b);

//sort_short.c//
int	find_min_index(t_node **list);
int	find_max_index(t_node **list);
void	if_two(t_node **list);
void	if_three(t_node **list);
void	if_five(t_node **list_a, t_node **list_b);

//check_errors.c//

void	ft_error(int n);
void	check_if_ordered(char **av);
void	check_double(char **argv, int argc);
void	checking_error(char **argv, int argc);

//check_num.c//

void	check_num(char *s);
void	check_num_max_min(char **av);

//sort_big.c//

void	order_by_chunks(t_node **list_a, t_node **list_b, int size_chunk);
int		find_biggest_num(t_node **list_b);
void	if_hundred(t_node **list_a, t_node **list_b, int n);


#endif
