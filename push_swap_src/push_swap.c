/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10:26:13 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/23 09:25:09 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rot_min(t_master *m_stack)
{
	int lowest;
	int	dist;
	int	size;

	size = list_size(STACK_A);
	lowest = find_lowest(STACK_A);
	dist = dist_cont(STACK_A, lowest);
	while (STACK_A && STACK_A->next && STACK_A_CONTENT != lowest)
	{
		if (dist < (size / 2))
			rotate_a(m_stack);
		else
			rev_rot_a(m_stack);
	}
}

void	simple_sort(t_master *m_stack)
{
	t_list	*tail;

	while (STACK_A->next && !is_stack_sorted(STACK_A))
	{
		tail = find_tail(STACK_A);
		if (sorted_any_order(STACK_A))
			rot_min(m_stack);
		if (!STACK_A_SORTED)
			swap_a(m_stack);
		if (STACK_A_CONTENT > *(int *)tail->content)
			rot_min(m_stack);
		if (is_stack_sorted(STACK_A))
			break ;
		rot_min(m_stack);
		push_b(m_stack);
	}
	while (STACK_B)
		push_a(m_stack);
}

int		main(int argc, char **argv)
{
	t_master	m_stack;

	if (argc > 1)
	{
		if (((errorhandler(&m_stack, argc, argv)) && m_stack.size > 0))
		{
			build_stacks(&m_stack);
			simple_sort(&m_stack);
		}
		else
		{
			ft_putendl("Error");
			return (1);
		}
	}
	free_all(&m_stack);
	return (0);
}
