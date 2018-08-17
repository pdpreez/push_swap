/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:50:13 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/08 09:38:07 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_master *m_stack)
{
	t_list *head;
	t_list *tail;

	if (STACK_A && STACK_A->next)
	{
		head = STACK_A->next;
		tail = find_tail(STACK_A);
		tail->next = STACK_A;
		STACK_A->next = NULL;
		STACK_A = head;
	}
}

void	rb(t_master *m_stack)
{
	t_list *head;
	t_list *tail;

	if (STACK_B && STACK_B->next)
	{
		head = STACK_B->next;
		tail = find_tail(STACK_B);
		tail->next = STACK_B;
		STACK_B->next = NULL;
		STACK_B = head;
	}
}

void	rotate_rotate(t_master *m_stack)
{
	rr(m_stack);
	ft_putendl("rr");
}

void	rr(t_master *m_stack)
{
	ra(m_stack);
	rb(m_stack);
}
