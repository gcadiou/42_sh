/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 17:24:33 by anyo              #+#    #+#             */
/*   Updated: 2018/02/18 18:36:03 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	-------------------------------------------------------------------------- +
**	Frees each string of the given array, then sets its pointer to NULL.
**	-------------------------------------------------------------------------- +
*/

void	ft_arrfree(char **arr)
{
	size_t	i;

	i = -1;
	if (arr != NULL)
	{
		while (*(arr + ++i))
			ft_free(*(arr + i));
		ft_free(arr);
	}
}