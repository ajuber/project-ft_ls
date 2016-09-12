/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 10:47:29 by ajubert           #+#    #+#             */
/*   Updated: 2016/09/12 12:02:47 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(void)
{
	t_e e;

	if (!(e.dirp = ft_oppendir(".")))
		return (0);
	e.pass = getpwuid(13842);
	ft_printf("%d   ", e.pass->pw_uid);
	while ((e.dp = readdir(e.dirp)))
	{
		if (e.dp->d_name[0] != '.')
			ft_printf("%s\n", e.dp->d_name);
	}
	return (0);
}
