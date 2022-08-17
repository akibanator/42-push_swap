/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_orchestrator.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:58:23 by akenji-a          #+#    #+#             */
/*   Updated: 2022/08/16 17:11:44 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

void	operation(char	*op, t_stack *stacks)
{
	if (ft_strcmp(op, "sa") == 0)
		swap_a(stacks);
}