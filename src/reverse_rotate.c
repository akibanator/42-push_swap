/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:20 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/24 17:53:10 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int		reverse_rotate_a(t_stack *stacks)
{
	if (stacks->head_stack_a == NULL || stacks->head_stack_a->next == NULL)
		return (1);
	t_node	*temp_node;
}

int		reverse_rotate_b(t_stack *stacks)
{
	t_node	*temp_node;
}

int		reverse_rotate_ab(t_stack *stacks)
{
	reverse_rotate_a(stacks);
	reverse_rotate_b(stacks);
	return (0);
}