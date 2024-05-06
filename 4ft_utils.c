/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4ft_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarunat <skarunat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:27:46 by skarunat          #+#    #+#             */
/*   Updated: 2023/08/05 19:12:33 by skarunat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
	free(str);
}

int	ft_is_sorted(t_stack **stack)
{
	t_stack	*head;

	head = *stack;
	while (head != NULL && head->next != NULL)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

int	ft_get_space(t_stack **stack, int i)
{
	t_stack	*head;
	int		space;

	space = 0;
	head = *stack;
	while (head)
	{
		if (head->index == i)
			break ;
		space++;
		head = head->next;
	}
	return (space);
}

void	ft_make_top(t_stack **stack, int space)
{
	t_stack	*head;
	int		tmp;

	if (space == 0)
		return ;
	head = *stack;
	tmp = ft_get_size(head) - space;
	if (space <= (ft_get_size(head) / 2))
	{
		while (space-- > 0)
			ft_ra(stack);
	}
	else
	{
		while (tmp-- > 0)
			ft_rra(stack);
	}
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}
