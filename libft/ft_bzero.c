/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:05:18 by anyo              #+#    #+#             */
/*   Updated: 2017/11/30 16:12:37 by anyo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	-------------------------------------------------------------------------- +
**	man 3 bzero
**	-------------------------------------------------------------------------- +
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}