/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:58:49 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 11:03:10 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

static void	sort_two(t_stack *stacks)
{
	t_node	*node;

	node = stacks->head_stack_a;
	if (node->num > node->next->num)
		swap_a(stacks);
}

static void	sort_three(t_stack *stacks)
{
	t_node	*node;

	node = stacks->head_stack_a;
	if (node->num > node->next->num && node->num < node->next->next->num)
		swap_a(stacks);
	else if (node->num < node->next->num && node->num > node->next->next->num)
		reverse_rotate_a(stacks);
	else if (node->num > node->next->num && node->num > node->next->next->num
		&& node->next->num < node->next->next->num)
		rotate_a(stacks);
	else if (node->num > node->next->num && node->num > node->next->next->num
		&& node->next->num > node->next->next->num)
		sort_three_c1(stacks);
	else if (node->num < node->next->num && node->num < node->next->next->num
		&& node->next->num > node->next->next->num)
		sort_three_c2(stacks);
}

static void	sort_five_four(t_stack *stacks)
{
	long	smallest_pos;

	if (stacks->len_a == 5)
	{
		smallest_pos = get_smallest_number_position(stacks);
		push_smallest_b(stacks, smallest_pos);
	}
	if (stacks->len_a == 4)
	{
		smallest_pos = get_smallest_number_position(stacks);
		push_second_smallest_b(stacks, smallest_pos);
	}
	sort_three(stacks);
	push_a(stacks);
	push_a(stacks);
}

int	sort(size_t num, t_stack *stacks)
{
	if (is_sorted(stacks))
		return (1);
	if (num == 2)
		sort_two(stacks);
	else if (num == 3)
		sort_three(stacks);
	else if (num == 5 || num == 4)
		sort_five_four(stacks);
	else
		radix_sort(stacks);
	return (0);
}
