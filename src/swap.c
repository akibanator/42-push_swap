/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:25 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/17 19:51:24 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

t_node	*swap(t_node	*node)
{
	t_node	*temp_node;

	if (node->next != NULL)
	{
		temp_node = node;
		node = node->next;
		temp_node->prev = node;
		temp_node->next = node->next;
		node->prev = NULL;
		node->next = temp_node;
	}
	return (node);
}

void		swap_a(t_stack *stacks)
{
	stacks->head_stack_a = swap(stacks->head_stack_a);
}

void		swap_b(t_stack *stacks)
{
	stacks->head_stack_b = swap(stacks->head_stack_b);
}

void		swap_ab(t_stack *stacks)
{
	swap_a(stacks);
	swap_b(stacks);
}