/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10:26:13 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/08 09:25:23 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	simple_sort(t_master *m_stack)
{
	t_list	*tail_a;

	while (!is_sorted(m_stack) && STACK_A->next)
	{
		tail_a = find_tail(STACK_A);
		if (sorted_any_order(STACK_A))
			rotate_a(m_stack);
		else if (!STACK_A_SORTED)
			swap_a(m_stack);
		else if (STACK_A_CONTENT > *(int *)tail_a->content)
		{
			if (STACK_B && STACK_B->next && STACK_B_SORTED)
				rrr(m_stack);
			else
				rev_rot_a(m_stack);
		}
		if (STACK_A_CONTENT < *(int *)tail_a->content)
			push_b(m_stack);
		if (STACK_B && STACK_B->next && STACK_B_SORTED)
			rev_rot_b(m_stack);
		if (is_stack_sorted(STACK_A))
		{
			while (STACK_B)
				push_a(m_stack);
		}
	}
}

int		main(int argc, char **argv)
{
	t_master	m_stack;
	int			x;

	x = 0;
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
	return (0);
}
