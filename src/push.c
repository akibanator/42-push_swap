/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:17 by akenji-a          #+#    #+#             */
/*   Updated: 2022/08/16 17:49:26 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_node	*push(t_node *node_1, t_node *node_2)
{

}

void	push_b(t_stack *stacks)
{
	stacks->head_stack_b = push(stacks->head_stack_a, stacks->head_stack_b);
}