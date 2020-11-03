/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:40:34 by sabra             #+#    #+#             */
/*   Updated: 2020/11/03 12:49:11 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int character)
{
	char	chr;

	chr = (char)character;
	if ((chr >= '0' && chr <= '9') || (chr >= 'a' && chr <= 'z')
		|| (chr >= 'A' &&  chr <= 'Z'))
	{		
		return (1);
	}
	return (0);
}