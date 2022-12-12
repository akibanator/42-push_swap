/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_smallest_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 04:21:50 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 04:27:44 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

void	push_second_smallest_b(t_stack *stacks, long smallest_pos)
{
	if (smallest_pos == 2)
		swap_a(stacks);
	if (smallest_pos == 3)
	{
		rotate_a(stacks);
		swap_a(stacks);
	}
	if (smallest_pos == 4)
		reverse_rotate_a(stacks);
	push_b(stacks);
}

void	push_smallest_b(t_stack *stacks, long smallest_pos)
{
	if (smallest_pos == 2)
		swap_a(stacks);
	if (smallest_pos == 3)
	{
		rotate_a(stacks);
		swap_a(stacks);
	}
	if (smallest_pos == 4)
	{
		reverse_rotate_a(stacks);
		reverse_rotate_a(stacks);
	}
	if (smallest_pos == 5)
		reverse_rotate_a(stacks);
	push_b(stacks);
}
