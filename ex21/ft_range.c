/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 11:17:23 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/14 19:15:57 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *out;
	int	i;

	if (min >= max)
		return (NULL);
	if (!(out = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = -1;
	while (++i < (max - min))
		out[i] = min + i;
	return (out);
}
