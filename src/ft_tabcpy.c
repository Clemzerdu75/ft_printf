/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 13:28:17 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:24:41 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabcpy(char **dst, char **src)
{
	int k;

	k = 0;
	while (src[k])
	{
		dst[k] = ft_strcpy(dst[k], src[k]);
		k++;
	}
	return (dst);
}
