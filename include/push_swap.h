/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:22:25 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 09:31:30 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	"../lib/libft/libft.h"
# include	"../lib/printf/ft_printf.h"
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_node {
	int				num;
	int				pos;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack {
	t_node	*head_stack_a;
	t_node	*head_stack_b;
	t_node	*current_stack_a;
	t_node	*current_stack_b;
	size_t	len_a;
	size_t	len_b;
}	t_stack;

int		is_valid_number(int argc, char *argv[]);
int		is_integer(int argc, char *argv[]);
void	build_stacks(int argc, char *argv[], t_stack *stacks);
int		has_duplicate(t_stack *stacks);
int		free_all(t_stack *stacks);
void	print_stacks(t_stack *stacks);
int		swap_a(t_stack *stacks);
int		swap_b(t_stack *stacks);
int		swap_ab(t_stack *stacks);
int		push_b(t_stack *stacks);
int		push_a(t_stack *stacks);
int		rotate_a(t_stack *stacks);
int		rotate_b(t_stack *stacks);
int		rotate_ab(t_stack *stacks);
int		reverse_rotate_a(t_stack *stacks);
int		reverse_rotate_b(t_stack *stacks);
int		reverse_rotate_ab(t_stack *stacks);
int		sort(size_t num, t_stack *stacks);
void	sort_three_c1(t_stack *stacks);
void	sort_three_c2(t_stack *stacks);
int		is_sorted(t_stack *stacks);
long	get_smallest_number_position(t_stack *stacks);
void	push_smallest_b(t_stack *stacks, long smallest_pos);
void	push_second_smallest_b(t_stack *stacks, long smallest_pos);
void	radix_sort(t_stack *stacks);
void	put_position(int argc, char *argv[], t_stack *stacks);

#endif
