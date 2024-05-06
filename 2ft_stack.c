/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ft_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarunat <skarunat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:27:46 by skarunat          #+#    #+#             */
/*   Updated: 2023/08/05 18:52:22 by skarunat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_get_next_min(t_stack **stack)
{
	t_stack	*head;
	t_stack	*min;
	int		min_num;

	min = NULL;
	min_num = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!min_num || head->value < min->value))
			{
				min = head;
				min_num = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	ft_stack_index(t_stack **stack)
{
	t_stack	*head;
	int		index;

	index = 0;
	head = ft_get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = ft_get_next_min(stack);
	}
}

void	ft_node_add_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

void	ft_error(char *msg)
{
	ft_putendl_fd(msg, 1);
	exit(0);
}
