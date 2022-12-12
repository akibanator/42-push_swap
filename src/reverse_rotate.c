/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:20 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 06:55:13 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int	reverse_rotate_a(t_stack *stacks)
{
	if (stacks->len_a < 2)
		return (1);
	stacks->head_stack_a->prev = stacks->current_stack_a;
	stacks->head_stack_a->prev->next = stacks->head_stack_a;
	stacks->head_stack_a = stacks->head_stack_a->prev;
	stacks->current_stack_a = stacks->current_stack_a->prev;
	stacks->head_stack_a->prev = NULL;
	stacks->current_stack_a->next = NULL;
	ft_printf("rra\n");
	return (0);
}

int	reverse_rotate_b(t_stack *stacks)
{
	if (stacks->len_b < 2)
		return (1);
	stacks->head_stack_b->prev = stacks->current_stack_b;
	stacks->head_stack_b->prev->next = stacks->head_stack_b;
	stacks->head_stack_b = stacks->head_stack_b->prev;
	stacks->current_stack_b = stacks->current_stack_b->prev;
	stacks->head_stack_b->prev = NULL;
	stacks->current_stack_b->next = NULL;
	ft_printf("rrb\n");
	return (0);
}

int	reverse_rotate_ab(t_stack *stacks)
{
	reverse_rotate_a(stacks);
	reverse_rotate_b(stacks);
	return (0);
}
