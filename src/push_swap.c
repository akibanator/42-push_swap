/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:21:41 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/17 19:54:11 by akenji-a         ###   ########.fr       */
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
	ft_printf("Depois do swap\n");
	operation("sa", stacks);
	print_stacks(stacks);
	ft_printf("Depois do push\n");
	operation("pb", stacks);
	print_stacks(stacks);
	ft_printf("Depois do push\n");
	operation("pb", stacks);
	print_stacks(stacks);
	ft_printf("2 Depois do swap a\n");
	operation("sa", stacks);
	print_stacks(stacks);
	ft_printf("2 Depois do swap b\n");
	operation("sb", stacks);
	print_stacks(stacks);
	ft_printf("3 Depois do swap ab\n");
	operation("ss", stacks);
	print_stacks(stacks);
	return (0);
}
