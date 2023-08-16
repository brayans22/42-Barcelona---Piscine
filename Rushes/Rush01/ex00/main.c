/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kluna-bo <kluna-bo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:49:31 by kluna-bo          #+#    #+#             */
/*   Updated: 2023/07/16 21:21:40 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush01(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		rush01(argv[1]);
	else
		write(1, "Error\n", 6);
	return (0);
}
