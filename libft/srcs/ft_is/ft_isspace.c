/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:15:30 by juochen           #+#    #+#             */
/*   Updated: 2018/02/28 21:40:35 by juochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
			c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}
