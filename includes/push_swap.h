/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 14:00:36 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/16 15:11:13 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# define STACK_A m_stack->stack_a
# define STACK_B m_stack->stack_b
# define SANC STACK_A->next->content
# define SBNC STACK_B->next->content
# define STACK_A_CONTENT *(int *)STACK_A->content
# define STACK_B_CONTENT *(int *)STACK_B->content
# define STACK_A_SORTED (STACK_A_CONTENT < *(int *)SANC)
# define STACK_B_SORTED (STACK_B_CONTENT < *(int *)SBNC)

typedef struct	s_master
{
	t_list		*stack_a;
	t_list		*stack_b;
	int			*arr;
	int			size;
}				t_master;

t_list			*find_tail(t_list *stack);

void			build_stacks(t_master *m_stack);
void			print_stacks(t_master *m_stack);
void			checker(t_master *m_stack, char *line);
void			push_a(t_master *m_stack);
void			push_b(t_master *m_stack);
void			pa(t_master *m_stack);
void			pb(t_master *m_stack);
void			swap_a(t_master *m_stack);
void			swap_b(t_master *m_stack);
void			sa(t_master *m_stack);
void			sb(t_master *m_stack);
void			ss(t_master *m_stack);
void			rotate_a(t_master *m_stack);
void			rotate_b(t_master *m_stack);
void			rotate_rotate(t_master *m_stack);
void			ra(t_master *m_stack);
void			rb(t_master *m_stack);
void			rr(t_master *m_stack);
void			rra(t_master *m_stack);
void			rrb(t_master *m_stack);
void			rrr(t_master *m_stack);
void			rev_rot_a(t_master *m_stack);
void			rev_rot_b(t_master *m_stack);
void			rev_rot_rot(t_master *m_stack);
void			swap_swap(t_master *m_stack);
void			find_steps(t_list *stack);
void			simple_sort(t_master *m_stack);
void			complex_sort(t_master *m_stack);
int				sorted_any_order(t_list *stack);
int				find_highest(t_list *stack);
int				find_lowest(t_list *stack);
int				errorhandler(t_master *m_stack, int argc, char **str);
int				is_sorted(t_master *m_stack);
int				is_stack_sorted(t_list *stack);
int				is_stack_reversed(t_list *stack);
int				create_array(t_master *m_stack, char **str);
int				noduplicate(int *arr, int size, int comp);
int				digstr(char *str);
int				is_stack_sorted(t_list *stack);
int				dist_cont(t_list *stack, int cont);
int				list_size(t_list *stack);
long			ft_atol(const char *str);

#endif
