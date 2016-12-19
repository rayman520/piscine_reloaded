/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 19:49:20 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/14 15:48:26 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 13)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
