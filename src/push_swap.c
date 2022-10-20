/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:21:41 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/20 12:12:40 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int		main(int argc, char *argv[])
{
	t_stack	*stacks;

	stacks = malloc(sizeof(t_stack));
	if (argc > 1)
	{
		if (args_parse(++argv, stacks))
			ft_printf("Bom garoto\n");
		else
			ft_printf("Mau garoto\n");
	}
	print_stacks(stacks);
	ft_printf("Depois do push\n");
	operation("pb", stacks);
	operation("pb", stacks);
	operation("pb", stacks);
	operation("pa", stacks);
	print_stacks(stacks);
	return (0);
}
