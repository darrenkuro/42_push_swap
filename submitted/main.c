/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:21:00 by dlu               #+#    #+#             */
/*   Updated: 2023/05/14 22:49:02 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
	//if (ac > 1)
	//	printf("%s\n", av[1]);
	printf("%p\n", calloc(0, 0));
	return (0);
}
