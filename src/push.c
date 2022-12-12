/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:17 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 06:54:21 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

static void	count(t_stack *stacks, char c)
{
	if (c == 'a')
	{
		stacks->len_a++;
		stacks->len_b--;
		ft_printf("pa\n");
	}
	else if (c == 'b')
	{
		stacks->len_a--;
		stacks->len_b++;
		ft_printf("pb\n");
	}
}

int	push_a(t_stack *stacks)
{
	if (stacks->len_b == 0)
		return (1);
	if (stacks->len_a == 0)
	{
		stacks->head_stack_a = stacks->head_stack_b;
		stacks->head_stack_b = stacks->head_stack_b->next;
		stacks->head_stack_b->prev = NULL;
		stacks->head_stack_a->prev = NULL;
		stacks->head_stack_a->next = NULL;
		stacks->current_stack_a = stacks->head_stack_a;
	}
	else
	{
		stacks->head_stack_a->prev = stacks->head_stack_b;
		stacks->head_stack_b = stacks->head_stack_b->next;
		if (stacks->len_b > 1)
			stacks->head_stack_b->prev = NULL;
		stacks->head_stack_a->prev->next = stacks->head_stack_a;
		stacks->head_stack_a = stacks->head_stack_a->prev;
		stacks->head_stack_a->prev = NULL;
	}
	count(stacks, 'a');
	if (stacks->len_b == 0)
		stacks->current_stack_b = NULL;
	return (0);
}

int	push_b(t_stack *stacks)
{
	if (stacks->len_a == 0)
		return (1);
	if (stacks->len_b == 0)
	{
		stacks->head_stack_b = stacks->head_stack_a;
		stacks->head_stack_a = stacks->head_stack_a->next;
		stacks->head_stack_a->prev = NULL;
		stacks->head_stack_b->prev = NULL;
		stacks->head_stack_b->next = NULL;
		stacks->current_stack_b = stacks->head_stack_b;
	}
	else
	{
		stacks->head_stack_b->prev = stacks->head_stack_a;
		stacks->head_stack_a = stacks->head_stack_a->next;
		if (stacks->len_a > 1)
			stacks->head_stack_a->prev = NULL;
		stacks->head_stack_b->prev->next = stacks->head_stack_b;
		stacks->head_stack_b = stacks->head_stack_b->prev;
		stacks->head_stack_b->prev = NULL;
	}
	count(stacks, 'b');
	if (stacks->len_a == 0)
		stacks->current_stack_a = NULL;
	return (0);
}
