/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_arg_z.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:17:43 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/04 18:08:00 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_flag_other(t_flag flag)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	tmp[0] = flag.flag;
	tmp[1] = '\0';
	flag.to_print = ft_strdups(tmp);
	flag.to_print = handle_field(flag);
	free(tmp);
	return (flag.to_print);
}
