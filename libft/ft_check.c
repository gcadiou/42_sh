/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 16:21:09 by anyo              #+#    #+#             */
/*   Updated: 2018/03/29 18:00:48 by apedron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	-------------------------------------------------------------------------- +
**	Prints a bold-italic-cyan "CHECK!". Useful when debugging code.
**	-------------------------------------------------------------------------- +
*/

void	ft_check(void)
{
	ft_putstr(FG_YELLOW);
	ft_putstr("CHECK!");
	ft_putstr(C_RESET);
	ft_putchar('\n');
}
