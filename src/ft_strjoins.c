/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 03:18:22 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:10:44 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoins(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2)
		return (ft_strdups(s2));
	if (s2 == NULL && s1)
		return (ft_strdups(s1));
	if (!(join = ft_strnew(ft_strlens(s1) + ft_strlens(s2) + 1)))
		return (NULL);
	while (++i < ft_strlens(s1))
		join[i] = s1[i];
	while (++j < ft_strlens(s2))
		join[i + j] = s2[j];
	join[i + j] = '\0';
	return (join);
}
