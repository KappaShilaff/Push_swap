/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcassaun <lcassaun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:35:52 by lcassaun          #+#    #+#             */
/*   Updated: 2020/07/13 17:13:52 by lcassaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ps.h"

int 	ps_error(char *str)
{
	ft_putstr_fd(str, 2);
	return (0);
}

int 	ps_valid_av(char *str)
{
	long int 	nbr;
	int 		i;
	int 		sign;

	i = 0;
	sign = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+'))
			return (0);
		if (str[i] == '-' || str[i] == '+')
			sign++;
		i++;
	}
	if (sign > 1)
		return (0);
	if (i > 11)
		return (0);
	nbr = ft_atoi_l(str);
//	printf("%ld\n", nbr);
	if (nbr > 2147483647 || nbr < -2147483648)
		return (0);
	return (1);
}

int 	ps_valid(int ac, char **av)
{
	int 	i;

	i = 1;
	if (ac == 1)
		return (ps_error("zero arguments\n"));
	while (i < ac)
	{
		if (ps_valid_av(av[i++]) == 0)
			return (ps_error("invalid argument\n"));
	}
	return (1);
}

int 	ps_valid_double(const long int *a, int i)
{
	int 	k;

	k = 0;
	while (k < i)
		if (a[k++] == a[i])
			return (0);
	return (1);
}

int 	ps_valid_double_a(int ac, char **av, long int *a)
{
	int 	i;

	i = 0;
	while (i < ac - 1)
	{
		a[i] = ft_atoi_l(av[i + 1]);
		if ((ps_valid_double(a, i)) == 0)
			return (ps_error("duplicate argument\n"));
		i++;
	}
	return (1);
}
