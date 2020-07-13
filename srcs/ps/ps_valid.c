/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcassaun <lcassaun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:35:52 by lcassaun          #+#    #+#             */
/*   Updated: 2020/07/13 16:02:02 by lcassaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ps.h"

int 	ps_error(char *str)
{
	ft_putstr_fd(str, 2);
	return (0);
}

int 	ps_valid_av(char *av)
{
	char		*str;
	long int 	nbr;
	int 		i;

	str = av;
	i = 0;
	while (*str)
	{
		if (!((*str >= '0' && *str <= '9') || *str == '-'))
			return (0);
		str++;
		i++;
	}
	if (i > 11)
		return (0);
	nbr = ft_atoi_l(av);
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
		if (ps_valid_av(av[i++]) == 0)
			return(ps_error("invalid argument\n"));
	return (0);
}
