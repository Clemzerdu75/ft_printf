/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_arg_o.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 14:50:12 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:19:57 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_toprint_o(va_list list, t_flag *flag)
{
	if (flag->modif)
	{
		if (ft_strcmp(flag->modif, "ll") == 0)
			flag->to_print =
			ft_ulltoa_base(va_arg(list, unsigned long long), 8, _XMIN_);
		if (ft_strcmps(flag->modif, "h") == 0)
			flag->to_print =
			ft_ulltoa_base(
			(unsigned short)va_arg(list, unsigned int), 8, _XMIN_);
		if (ft_strcmps(flag->modif, "z") == 0)
			flag->to_print = ft_ulltoa_base(va_arg(list, ssize_t), 8, _XMIN_);
		if (ft_strcmps(flag->modif, "l") == 0)
			flag->to_print =
			ft_ulltoa_base(va_arg(list, unsigned long), 8, _XMIN_);
		if (ft_strcmps(flag->modif, "hh") == 0)
			flag->to_print =
			ft_ulltoa_base(
			(unsigned char)va_arg(list, unsigned int), 8, _XMIN_);
		if (ft_strcmps(flag->modif, "j") == 0)
			flag->to_print = ft_ulltoa_base(va_arg(list, intmax_t), 8, _XMIN_);
	}
	else
		flag->to_print = ft_ulltoa_base(va_arg(list, unsigned int), 8, _XMIN_);
}

char		*ft_flag_o(va_list list, t_flag flag)
{
	fill_toprint_o(list, &flag);
	if (flag.precision < 0 && ft_chrstring(flag.to_print, "0"))
		flag.to_print = ft_strdups("");
	if (flag.precision >= 0)
		flag.to_print = zero_fill(flag.to_print, flag.precision);
	if (ft_chrstring(flag.option, "#") == 1)
	{
		flag.field -= 1;
		flag.to_print = handle_field(flag);
	}
	else
		flag.to_print = handle_field(flag);
	if ((ft_chrstring(flag.option, "#") == 1))
	{
		if (flag.precision == -1)
			flag.to_print = ft_strjoin("0", flag.to_print);
		else if (search_zero(flag.to_print) == 1)
			flag.to_print = ft_strdups(flag.to_print);
		else
			flag.to_print = ft_strdups(add_hashtag(flag.to_print, "0"));
	}
	return (flag.to_print);
}
