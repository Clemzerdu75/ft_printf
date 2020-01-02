/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_dupfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 18:07:17 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:10:44 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_dupfree(char *str)
{
	char	*new;

	new = NULL;
	new = ft_strdups(str);
	free(str);
	str = NULL;
	return (new);
}
