/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 15:27:43 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/16 14:59:18 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_master *m_stack)
{
	t_list *temp;

	if (STACK_B)
	{
		if (STACK_B->next)
			temp = STACK_B->next;
		else
			temp = NULL;
		ft_lstadd(&STACK_A, STACK_B);
		STACK_B = temp;
	}
}

void	pb(t_master *m_stack)
{
	t_list *temp;

	if (STACK_A)
	{
		if (STACK_A->next)
			temp = STACK_A->next;
		else
			temp = NULL;
		ft_lstadd(&STACK_B, STACK_A);
		STACK_A = temp;
	}
}

void	sa(t_master *m_stack)
{
	t_list *temp;
	t_list *head;

	if (STACK_A && STACK_A->next)
	{
		head = STACK_A;
		if (STACK_A->next->next)
			temp = STACK_A->next->next;
		else
			temp = NULL;
		STACK_A = STACK_A->next;
		STACK_A->next = head;
		STACK_A->next->next = temp;
	}
}

void	sb(t_master *m_stack)
{
	t_list *temp;
	t_list *head;

	if (STACK_B && STACK_B->next)
	{
		head = STACK_B;
		if (STACK_B->next->next)
			temp = STACK_B->next->next;
		else
			temp = NULL;
		STACK_B = STACK_B->next;
		STACK_B->next = head;
		STACK_B->next->next = temp;
	}
}

void	swap_swap(t_master *m_stack)
{
	ss(m_stack);
	ft_putendl("ss");
}
