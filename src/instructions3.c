/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:43:36 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/16 15:01:37 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_master *m_stack)
{
	t_list *tail;
	t_list *temp;

	if (STACK_A && STACK_A->next)
	{
		tail = STACK_A;
		while (tail->next)
		{
			temp = tail;
			tail = tail->next;
		}
		tail->next = STACK_A;
		temp->next = NULL;
		STACK_A = tail;
	}
}

void	rrb(t_master *m_stack)
{
	t_list *tail;
	t_list *temp;

	if (STACK_B && STACK_B->next)
	{
		tail = STACK_B;
		while (tail->next)
		{
			temp = tail;
			tail = tail->next;
		}
		tail->next = STACK_B;
		temp->next = NULL;
		STACK_B = tail;
	}
}

void	rrr(t_master *m_stack)
{
	rra(m_stack);
	rrb(m_stack);
}

void	rev_rot_rot(t_master *m_stack)
{
	rrr(m_stack);
	ft_putendl("rrr");
}
