/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:12:32 by anyo              #+#    #+#             */
/*   Updated: 2017/11/30 17:31:46 by anyo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	-------------------------------------------------------------------------- +
**	Takes as a parameter a link’s pointer address and frees the memory of the
**	link’s content using the function `del` given as a parameter, then frees the
**	link’s memory using free(3).
**	The memory of next must not be freed under any circumstance.
**	Finally, the pointer to the link that was just freed must be set to NULL
**	(quite similar to the function ft_memdel in the mandatory part).
**	-------------------------------------------------------------------------- +
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst)
		return ;
	(del)((*alst)->content, (*alst)->content_size);
	ft_free(*alst);
	*alst = NULL;
}
