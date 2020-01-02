/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 19:32:03 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:26:43 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Search if one of multiple characteres (written in the string chr) are
** contained in a string (str)
*/

int		ft_chrstring(const char *str, char *chr)
{
	int j;
	int i;

	i = 0;
	j = 0;
	if (str && chr)
	{
		while (str[i])
		{
			j = 0;
			while (chr[j])
			{
				if (chr[j] == str[i])
					return (1);
				j++;
			}
			i++;
		}
	}
	return (0);
}
