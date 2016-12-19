/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:34:08 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/14 15:13:51 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(int fd)
{
	char buf;

	while (read(fd, &buf, 1))
		write(1, &buf, 1);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	ft_display_file(fd);
	close(fd);
	return (0);
}
