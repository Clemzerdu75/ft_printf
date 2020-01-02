/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_arg_per.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 14:50:04 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:27:14 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_flag_per(t_flag flag)
{
	flag.to_print = ft_strdups("%");
	flag.to_print = handle_field(flag);
	return (flag.to_print);
}
