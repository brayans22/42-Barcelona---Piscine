/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:46:34 by maria-nm          #+#    #+#             */
/*   Updated: 2023/07/25 18:48:07 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "rush02.h"

int				ft_atoi(const char *str);
void			print_value(int n, t_dict *dict, int *first);
void			ft_putstr(char *str);

int	is_positive(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_dict	*dict;
	int		*first;
	int		address_first;

	address_first = 1;
	first = &address_first;
	if (argc == 2)
	{
		if (is_positive (argv[1]))
		{
			write (1, "Error\n", 6);
			return (0);
		}
		else
		{
			dict = process_file("numbers.dict");
			print_value(ft_atoi(argv[1]), dict, first);
		}
	}
	return (0);
}
