/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinstuct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 11:17:57 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/16 15:00:32 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_master *m_stack)
{
	sa(m_stack);
	ft_putendl("sa");
}

void	swap_b(t_master *m_stack)
{
	sb(m_stack);
	ft_putendl("sb");
}

void	rotate_a(t_master *m_stack)
{
	ra(m_stack);
	ft_putendl("ra");
}

void	rotate_b(t_master *m_stack)
{
	rb(m_stack);
	ft_putendl("rb");
}

void	ss(t_master *m_stack)
{
	sa(m_stack);
	sb(m_stack);
}
