/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:59:10 by cfauvell          #+#    #+#             */
/*   Updated: 2019/04/05 17:10:44 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		somme;
	int		sign;

	sign = 1;
	somme = 0;
	i = 0;
	if (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i++] == '-')
				sign = -1;
		}
		while (str[i] >= '0' && str[i] <= '9')
			somme = somme * 10 + (str[i++] - 48);
	}
	return (sign * somme);
}
