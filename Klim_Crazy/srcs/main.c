/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 20:38:55 by kradoste          #+#    #+#             */
/*   Updated: 2019/11/11 22:49:40 by kradoste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"

int main(int ac, char **argv)
{
	(void)ac;
	int		fd;
	char	*line;

	fd = open(argv[2], O_RDONLY);
	line = ft_strnew(1);
	while (read(fd, line, 1) < 0)
	{
		ft_printf("%x ", line[0]);
		ft_strdel(&line);
	}
	return (0);
}
