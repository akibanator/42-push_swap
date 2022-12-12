/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:46:39 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/07 12:15:14 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

void	sort_three_c1(t_stack *stacks)
{
	swap_a(stacks);
	reverse_rotate_a(stacks);
}

void	sort_three_c2(t_stack *stacks)
{
	swap_a(stacks);
	rotate_a(stacks);
}
