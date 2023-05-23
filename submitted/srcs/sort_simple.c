/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:30:08 by dlu               #+#    #+#             */
/*   Updated: 2023/05/23 16:47:39 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* */
void	sort_three(t_data *data, int write)
{
	t_ui	*arr;

	arr = data->a;
	if (arr[2] > arr[0] && arr[0] > arr[1])
		op_exec_sa(data, write);
	else if (arr[1] > arr[0] && arr[0] > arr[2])
		op_exec_rra(data, write);
	else if (arr[0] > arr[2] && arr[2] > arr[1])
		op_exec_ra(data, write);
	else if (arr[0] > arr[1] && arr[1] > arr[2])
	{
		op_exec_sa(data, write);
		op_exec_rra(data, write);
	}
	else if (arr[1] > arr[2] && arr[2] > arr[0])
	{
		op_exec_sa(data, write);
		op_exec_ra(data, write);
	}
}

/*
void	sort_five(t_ui *arr, t_list **op)
{
	ft_lstadd_back(op, ft_lstnew("pb"));
	ft_lstadd_back(op, ft_lstnew("pb"));
	if (arr[0] > arr[1])
		ft_lstadd_back(op, ft_lstnew("rb"));
	arr += 2;
	ft_printf("arr: %u\n", *arr);
	sort_three(arr, op, FALSE);
	ft_lstadd_back(op, ft_lstnew("pa"));
	ft_lstadd_back(op, ft_lstnew("pa"));
}*/
