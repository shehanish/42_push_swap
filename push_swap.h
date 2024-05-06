/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarunat <skarunat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:36:31 by skarunat          #+#    #+#             */
/*   Updated: 2023/08/05 18:50:48 by skarunat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	struct s_stack	*next;
}					t_stack;

// helper functions
int					word_count(char const *s, char c);
int					word_length(char const *s, char c);
char				**f(char const *s, char c, char **result, int words_count);
char				**ft_split(char const *s, char c);
long				ft_atoi(const char *str);
int					ft_isdigit(int c);
void				ft_putendl_fd(char *str, int fd);
void				ft_putnbr_fd(int n, int fd);
void				*ft_bzero(void *s, size_t len);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *str, int fd);

// check args
void				ft_args_check(int argc, char **argv);

// ft_stack , ft_stack_2
void				ft_stack_index(t_stack **stack);
t_stack				*ft_new_node(int value);
void				ft_node_add_front(t_stack **stack, t_stack *new);
t_stack				*ft_last_node(t_stack *head);
void				ft_node_add_back(t_stack **stack, t_stack *new);
int					ft_get_size(t_stack *head);
void				ft_print_list(t_stack *head);

// ft_utils
void				ft_free(char **str);
void				ft_error(char *msg);
void				ft_error_1(char *msg, int argc, char **args);
int					ft_is_sorted(t_stack **stack);
int					ft_get_space(t_stack **stack, int i);
void				ft_make_top(t_stack **stack, int space);
void				ft_free_stack(t_stack **stack);

// ft_apply_rulle_push
int					ft_push(t_stack **stack_to, t_stack **stack_from);
int					ft_pa(t_stack **stack_a, t_stack **stack_b);
int					ft_pb(t_stack **stack_a, t_stack **stack_b);

// ft_apply_rule_rotate
int					ft_rotate(t_stack **stack);
int					ft_ra(t_stack **stack_a);
int					ft_rb(t_stack **stack_b);
int					ft_rr(t_stack **stack_a, t_stack **stack_b);

// ft_apply_rule_swap
int					ft_swap(t_stack **stack);
int					ft_sa(t_stack **stack_a);
int					ft_sb(t_stack **stack_b);
int					ft_ss(t_stack **stack_a, t_stack **stack_b);

// ft_rule_reverse_and_roate
int					ft_reverserotate(t_stack **stack);
int					ft_rra(t_stack **stack_a);
int					ft_rrb(t_stack **stack_b);
int					ft_rrr(t_stack **stack_a, t_stack **stack_b);

void				ft_ra_and_sa(t_stack **stack_a);

// ft_radix
void				ft_radix_sort(t_stack **stack_a, t_stack **stack_b);

// ft_sort_small
void				ft_sort_3(t_stack **stack_a, t_stack **stack_b);
void				ft_sort_5(t_stack **stack_a, t_stack **stack_b);
void				ft_small_sort(t_stack **stack_a, t_stack **stack_b);
void				ft_sort_4_for_5(t_stack **stack_a, t_stack **stack_b);
#endif