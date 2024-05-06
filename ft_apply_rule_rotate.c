/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_rule_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarunat <skarunat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:25:40 by skarunat          #+#    #+#             */
/*   Updated: 2023/08/05 18:22:44 by skarunat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_get_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_last_node(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ft_ra(t_stack **stack_a)
{
	if (ft_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	ft_rb(t_stack **stack_b)
{
	if (ft_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	if ((ft_get_size(*stack_a) < 2) || (ft_get_size(*stack_b) < 2))
		return (-1);
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}
