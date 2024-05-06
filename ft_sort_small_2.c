/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarunat <skarunat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:27:46 by skarunat          #+#    #+#             */
/*   Updated: 2023/08/06 13:43:28 by skarunat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra_and_sa(t_stack	**stack_a)
{
	ft_ra(stack_a);
	ft_sa(stack_a);
}

// // This function sorts the first three elements of stack A in ascending order,
// // using operations on two stacks A and B.
// void	ft_sort_3(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	*tmp;

// 	// Store the second element of stack A in 'tmp' for comparison.
// 	tmp = (*stack_a)->next;

// 	// If the first element is 0 and the second element is 2,
// 	// move the first element to stack B, swap the top two elements on stack A,
// 	// and move the element back to stack A from stack B.
// 	if (((*stack_a)->index == 0) && (tmp->index == 2))
// 	{
// 		ft_pb(stack_a, stack_b); // Push the top element from stack A to stack B.
// 		ft_sa(stack_a);          // Swap the top two elements on stack A.
// 		ft_pa(stack_a, stack_b); // Push the top element from stack B back to stack A.
// 	}
// 	// If the first element is 1 and the second element is 0,
// 	// swap the top two elements on stack A.
// 	else if (((*stack_a)->index == 1) && (tmp->index == 0))
// 		ft_sa(stack_a);
// 	// If the first element is 1 and the second element is 2,
// 	// reverse rotate stack A (move the last element to the top).
// 	else if (((*stack_a)->index == 1) && (tmp->index == 2))
// 		ft_rra(stack_a);
// 	// If the first element is 2 and the second element is 1,
// 	// rotate stack A (move the top element to the bottom) and then swap the top two elements.
// 	else if (((*stack_a)->index == 2) && (tmp->index == 1))
// 	{
// 		ft_ra(stack_a);  // Rotate stack A.
// 		ft_sa(stack_a);  // Swap the top two elements on stack A.
// 	}
// 	// If the first element is 2 and the second element is 0,
// 	// rotate stack A (move the top element to the bottom).
// 	else if (((*stack_a)->index == 2) && (tmp->index == 0))
// 	{
// 		ft_ra(stack_a);  // Rotate stack A.
// 	}
// }


void	ft_sort_3(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = (*stack_a)->next;
	if (((*stack_a)->index == 0) && (tmp->index == 2))
	{
		ft_pb(stack_a, stack_b);
		ft_sa(stack_a);
		ft_pa(stack_a, stack_b);
	}
	else if (((*stack_a)->index == 1) && (tmp->index == 0))
		ft_sa(stack_a);
	else if (((*stack_a)->index == 1) && (tmp->index == 2))
		ft_rra(stack_a);
	else if (((*stack_a)->index == 2) && (tmp->index == 1))
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
	}
	else if (((*stack_a)->index == 2) && (tmp->index == 0))
	{
		ft_ra(stack_a);
	}
}

// static void	ft_sort_4(t_stack **stack_a, t_stack **stack_b)
// {
// 	int	space;

// 	if (ft_is_sorted(stack_a))
// 		return ;
// 	space = ft_get_space(stack_a, ft_get_min(stack_a, -1));
// 	if (space == 1)
// 		ft_ra(stack_a);
// 	else if (space == 2)
// 	{
// 		ft_ra(stack_a);
// 		ft_ra(stack_a);
// 	}
// 	else if (space == 3)
// 		ft_rra(stack_a);
// 	if (ft_is_sorted(stack_a))
// 		return ;
// 	ft_pb(stack_a, stack_b);
// 	ft_sort_3(stack_a, stack_b);
// 	ft_pa(stack_a, stack_b);
// }
void	ft_sort_4(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	while (((*stack_a)->index) != 0)
		ft_ra(stack_a);
	ft_pb(stack_a, stack_b);
	tmp = (*stack_a)->next;
	if (((*stack_a)->index == 1) && (tmp->index == 3))
	{
		ft_pb(stack_a, stack_b);
		ft_sa(stack_a);
		ft_pa(stack_a, stack_b);
	}
	else if (((*stack_a)->index == 2) && (tmp->index == 1))
		ft_sa(stack_a);
	else if (((*stack_a)->index == 2) && (tmp->index == 3))
		ft_rra(stack_a);
	else if (((*stack_a)->index == 3) && (tmp->index == 2))
		ft_ra_and_sa(stack_a);
	else if (((*stack_a)->index == 3) && (tmp->index == 1))
	{
		ft_ra(stack_a);
	}
	ft_pa(stack_a, stack_b);
}
// void	ft_sort_5(t_stack **stack_a, t_stack **stack_b)
// {
// 	int	space;

// 	space = ft_get_space(stack_a, ft_get_min(stack_a, -1));
// 	if (space == 1)
// 		ft_ra(stack_a);
// 	else if (space == 2)
// 	{
// 		ft_ra(stack_a);
// 		ft_ra(stack_a);
// 	}
// 	else if (space == 3)
// 	{
// 		ft_rra(stack_a);
// 		ft_rra(stack_a);
// 	}
// 	else if (space == 4)
// 		ft_rra(stack_a);
// 	if (ft_is_sorted(stack_a))
// 		return ;
// 	ft_pb(stack_a, stack_b);
// 	ft_sort_4(stack_a, stack_b);
// 	ft_pa(stack_a, stack_b);
// }

void	ft_small_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	if (ft_is_sorted(stack_a) || ft_get_size(*stack_a) == 0
		|| ft_get_size(*stack_a) == 1)
		return ;
	size = ft_get_size(*stack_a);
	if (size == 2)
		ft_sa(stack_a);
	else if (size == 3)
		ft_sort_3(stack_a, stack_b);
	else if (size == 4)
		ft_sort_4(stack_a, stack_b);
	else if (size == 5)
		ft_sort_5(stack_a, stack_b);
}
