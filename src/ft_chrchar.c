/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 19:30:28 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:26:21 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Search if one of multiple characteres (written in the string chr) are
** contained in a char (c)
*/

int		ft_chrchar(char c, char *chr)
{
	int i;

	i = 0;
	while (chr[i])
	{
		if (c == chr[i])
			return (1);
		i++;
	}
	return (0);
}
