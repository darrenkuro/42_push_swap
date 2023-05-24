/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:15:26 by dlu               #+#    #+#             */
/*   Updated: 2023/05/24 11:57:01 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(const char *msg)
{
	write(STDERR, msg, ft_strlen(msg));
}

/* Initialize the data structure, parse the argument into stack a. */
int	data_init(int ac, char **av, t_data *data)
{
	int	i;

	data->a = (t_ui *) ft_calloc(ac - 1, sizeof(t_ui));
	if (!data->a)
		return (0);
	data->b = (t_ui *) ft_calloc(ac - 1, sizeof(t_ui));
	if (!data->b)
		return (free(data->a), FAILURE);
	i = -1;
	while (++i < MAX_SORT)
		data->op[i] = NULL;
	data->size_a = ac - 1;
	data->size_b = 0;
	input_parser(ac, av, data);
	return (1);
}
