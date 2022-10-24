/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_orchestrator.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:58:23 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/24 19:43:35 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

void	operation(char	*op, t_stack *stacks)
{
	if (ft_strcmp(op, "sa") == 0)
		swap_a(stacks);
	if (ft_strcmp(op, "sb") == 0)
		swap_b(stacks);
	if (ft_strcmp(op, "ss") == 0)
		swap_ab(stacks);
	if (ft_strcmp(op, "pa") == 0)
		push_a(stacks);
	if (ft_strcmp(op, "pb") == 0)
		push_b(stacks);
	if (ft_strcmp(op, "ra") == 0)
		rotate_a(stacks);
	if (ft_strcmp(op, "rb") == 0)
		rotate_b(stacks);
	if (ft_strcmp(op, "rr") == 0)
		rotate_ab(stacks);
	if (ft_strcmp(op, "rra") == 0)
		reverse_rotate_a(stacks);
	if (ft_strcmp(op, "rrb") == 0)
		reverse_rotate_b(stacks);
	if (ft_strcmp(op, "rrr") == 0)
		reverse_rotate_ab(stacks);
}