/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:04:02 by anyo              #+#    #+#             */
/*   Updated: 2017/11/30 16:55:54 by anyo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	-------------------------------------------------------------------------- +
**	Outputs the string `s` to the standard output followed by a ’\n’.
**	-------------------------------------------------------------------------- +
*/

void	ft_putendl(char const *s)
{
	ft_putendl_fd(s, 1);
}
