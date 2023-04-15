/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luatshem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:30:09 by luatshem          #+#    #+#             */
/*   Updated: 2023/02/18 14:58:20 by luatshem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if (arg >= 65 && arg <= 90)
		return (1);
	else if (arg >= 97 && arg <= 122)
		return (2);
	else
		return (0);
}