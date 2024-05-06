/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rule_reverse_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarunat <skarunat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:25:40 by skarunat          #+#    #+#             */
/*   Updated: 2023/08/05 18:23:21 by skarunat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_reverserotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_get_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_last_node(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	ft_rra(t_stack **stack_a)
{
	if (ft_reverserotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	ft_rrb(t_stack **stack_b)
{
	if (ft_reverserotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	if ((ft_get_size(*stack_a) < 2) || (ft_get_size(*stack_b) < 2))
		return (-1);
	ft_reverserotate(stack_a);
	ft_reverserotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
