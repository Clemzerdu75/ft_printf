/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_arg_dd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 14:50:19 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:20:50 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_flag_dd(va_list list, t_flag flag)
{
	if (ft_strcmps(flag.modif, "z") == 0)
	{
		flag.to_print = ft_lltoa_base(va_arg(list, ssize_t), 10, _XMIN_);
		return (flag.to_print);
	}
	else
	{
		flag.to_print = ft_lltoa_base(va_arg(list, long long), 10, _XMIN_);
		return (flag.to_print);
	}
	if (ft_chrstring(flag.option, "+ ") == 1)
		flag.to_print = add_sign(flag.to_print, flag.option);
	if ((flag.precision >= 0 || flag.precision == -1) &&
		ft_strequ(flag.modif, "j"))
	{
		if (flag.precision <= 0 && ft_strequ(flag.to_print, "0"))
		{
			free(flag.to_print);
			flag.to_print = ft_strdups("\0");
		}
		else if (flag.precision >= 0)
			flag.to_print = zero_fill(flag.to_print, flag.precision);
	}
	flag.to_print = handle_field(flag);
	return (flag.to_print);
}