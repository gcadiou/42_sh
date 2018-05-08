/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_envpathentry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalliou <mgalliou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:14:17 by mgalliou          #+#    #+#             */
/*   Updated: 2018/04/26 19:44:42 by apedron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minishell.h"

char			*get_envpathentry(char *cmd, char *envivar)
{
	char			**path;
	char			*pathentry;
	DIR				*dirp;
	struct dirent	*entry;
	int				i;

	if (!(path = ft_strsplit(env_get_val(envivar), ':')))
		return (NULL);
	pathentry = NULL;
	i = -1;
	while (!pathentry && path[++i])
	{
		if ((dirp = opendir(path[i])))
		{
			while (!pathentry && (entry = readdir(dirp)))
				if (ft_strequ(cmd, entry->d_name))
					pathentry = ft_strcjoin(path[i], cmd, '/');
			closedir(dirp);
		}
	}
	ft_tabdel(&path);
	return (pathentry);
}
