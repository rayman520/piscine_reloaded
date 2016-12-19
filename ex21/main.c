/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 18:31:09 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/14 19:07:41 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max);

#define MIN 0
#define MAX 1
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_range(MIN, MAX);
	if (tab)
	{
		while (i < MAX - MIN)
		{
			ft_putnbr(tab[i++]);
			ft_putchar('\n');
		}
	}
	else
		ft_putstr("enjoy prison you sick bastard");
	return (0);
}
