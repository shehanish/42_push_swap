/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarunat <skarunat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:49:34 by skarunat          #+#    #+#             */
/*   Updated: 2023/08/05 18:23:27 by skarunat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_5(t_stack **stack_a, t_stack **stack_b)
{
	while (((*stack_a)->index) != 0)
		ft_ra(stack_a);
	ft_pb(stack_a, stack_b);
	ft_sort_4_for_5(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_sort_4_for_5(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	while (((*stack_a)->index) != 1)
		ft_ra(stack_a);
	ft_pb(stack_a, stack_b);
	tmp = (*stack_a)->next;
	if (((*stack_a)->index == 2) && (tmp->index == 4))
	{
		ft_pb(stack_a, stack_b);
		ft_sa(stack_a);
		ft_pa(stack_a, stack_b);
	}
	else if (((*stack_a)->index == 3) && (tmp->index == 2))
		ft_sa(stack_a);
	else if (((*stack_a)->index == 3) && (tmp->index == 4))
		ft_rra(stack_a);
	else if (((*stack_a)->index == 4) && (tmp->index == 3))
		ft_ra_and_sa(stack_a);
	else if (((*stack_a)->index == 4) && (tmp->index == 2))
	{
		ft_ra(stack_a);
	}
	ft_pa(stack_a, stack_b);
}
