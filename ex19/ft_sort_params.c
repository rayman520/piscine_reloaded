/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 09:35:09 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/14 16:32:28 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 - *s2 < 0)
		return (-1);
	if (*s1 - *s2 > 0)
		return (1);
	return (0);
}

void	ft_sort_argv(int argc, char **argv)
{
	int		i;
	char	*tmp;

	while (argc > 0)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		argc--;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 2)
		ft_sort_argv(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
