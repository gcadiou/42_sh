/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:14:13 by anyo              #+#    #+#             */
/*   Updated: 2017/11/30 17:30:20 by anyo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	-------------------------------------------------------------------------- +
**	Takes as a parameter the address of a string that need to be freed with
**	free(3), then sets its pointer to NULL.
**	-------------------------------------------------------------------------- +
*/

void	ft_strdel(char **as)
{
	if (!as || !*as)
		return ;
	ft_free(*as);
	*as = NULL;
}
