/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1check_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarunat <skarunat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:27:46 by skarunat          #+#    #+#             */
/*   Updated: 2023/08/05 19:13:45 by skarunat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_present(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_is_num(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_error_1(char *msg, int argc, char **args)
{
	ft_putendl_fd(msg, 1);
	if (argc == 2)
	{
		ft_free(args);
	}
	exit(0);
}

void	ft_args_check(int argc, char **argv)
{
	int		i;
	long	new;
	char	**args;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_atoi(args[i]);
		if (!ft_is_num(args[i]))
			ft_error_1("Error\n", argc, args);
		if (ft_present(new, args, i))
			ft_error_1("Error\n", argc, args);
		if (new < -2147483648 || new > 2147483647)
			ft_error_1("Error\n", argc, args);
		i++;
	}
	if (argc == 2)
		ft_free(args);
}
