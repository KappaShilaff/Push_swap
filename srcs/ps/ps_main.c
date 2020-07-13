/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcassaun <lcassaun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:28:34 by lcassaun          #+#    #+#             */
/*   Updated: 2020/07/13 16:55:22 by lcassaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ps.h"

static void	ps_fill_b(long int *b, int ac)
{
	int 	i;

	i = 0;
	while (i < ac - 1)
		b[i++] = VOID;
}

int 	main(int ac, char **av)
{
	long int	*a;
	long int	*b;

	if (ps_valid(ac, av) == 0)
		return (0);
	a = malloc(sizeof(long int) * (ac - 1));
	if (ps_valid_double_a(ac, av, a) == 0)
	{
		free(a);
		return (0);
	}
	b = malloc(sizeof(long int) * (ac - 1));
	ps_fill_b(b, ac);
	while (*a)
		printf("%ld\n", *a++);
	while (*b)
		printf("%ld\n", *b++);
	free(a - ac + 1);
	free(b - ac + 1);
	return (0);
}