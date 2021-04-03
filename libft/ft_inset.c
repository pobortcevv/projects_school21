/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 23:59:33 by sabra             #+#    #+#             */
/*   Updated: 2021/01/08 00:03:02 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char *line, char *set)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (!(ft_strchr(set, line[i])))
			return (0);
		i++;
	}
	return (1);
}