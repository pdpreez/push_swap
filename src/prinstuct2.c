/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinstuct2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 11:20:47 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/16 15:01:08 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rev_rot_a(t_master *m_stack)
{
	rra(m_stack);
	ft_putendl("rra");
}

void	rev_rot_b(t_master *m_stack)
{
	rrb(m_stack);
	ft_putendl("rrb");
}

void	push_a(t_master *m_stack)
{
	pa(m_stack);
	ft_putendl("pa");
}

void	push_b(t_master *m_stack)
{
	pb(m_stack);
	ft_putendl("pb");
}
