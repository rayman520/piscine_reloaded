/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 19:33:53 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/14 15:46:16 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int out;

	if (nb < 0 || nb > 13)
		return (0);
	out = 1;
	while (nb > 1)
		out *= nb--;
	return (out);
}
