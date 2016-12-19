/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 10:48:53 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/14 16:33:44 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dup;
	int		i;

	i = -1;
	size = ft_strlen(src);
	if (!(dup = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (++i < size)
		dup[i] = src[i];
	dup[i] = '\0';
	return (dup);
}
