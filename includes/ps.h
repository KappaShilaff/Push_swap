/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcassaun <lcassaun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:28:57 by lcassaun          #+#    #+#             */
/*   Updated: 2020/07/13 16:48:47 by lcassaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_PS_H
# define PUSH_SWAP_PS_H

# include "../libft/includes/libft.h"
# include <stdio.h>
# define VOID	2147483648

int 	ps_error(char *str);
int 	ps_valid(int ac, char **av);
int 	ps_valid_double_a(int ac, char **av, long int *a);

#endif
