/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:10:23 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:10:44 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (++i < ft_strlen(s1))
		join[i] = s1[i];
	while (++j < ft_strlen(s2))
		join[i + j] = s2[j];
	join[i + j] = '\0';
	return (join);
}
