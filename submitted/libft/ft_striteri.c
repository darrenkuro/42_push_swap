/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@42berlin.de>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 00:38:11 by dlu               #+#    #+#             */
/*   Updated: 2023/05/02 11:18:41 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = -1;
	if (!s || !f)
		return ;
	while (s[++i])
		f((unsigned int) i, &s[i]);
}

/* ////
void	ft_striteri_a(unsigned int i, char *s)
{
	if (i < 2)
		*s = 'a';
}

#include <stdio.h>

int	main(void)
{
	char	test[8] = "abcdefg";

	ft_striteri(test, ft_striteri_a);
	printf("%s\n", test);

	return (0);
}
*/ ////
