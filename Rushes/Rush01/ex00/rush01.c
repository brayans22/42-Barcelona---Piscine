/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kluna-bo <kluna-bo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:52:01 by kluna-bo          #+#    #+#             */
/*   Updated: 2023/07/17 13:14:58 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

void	print_matrix(char **mat);
void	fill_all_matrix(char **mat);
int		sort_input(char *str);
void	fill_matrix(char **mat, char *str);
int		validate_input(char *str);

void	rush01(char *str)
{
	char	**mat;
	int		count;

	if (sort_input(str) && validate_input(str))
	{
		mat = (char **)malloc(4 * 8);
		count = 0;
		while (count < 4)
		{
			mat[count] = (char *)malloc(4);
			count++;
		}
		fill_all_matrix(mat);
		fill_matrix(mat, str);
		print_matrix(mat);
	}
	else
		write(1, "Error\n", 5);
}

void	print_matrix(char **mat)
{
	int	count_row;
	int	count_col;

	count_row = 0;
	count_col = 0;
	while (count_row < 4)
	{
		while (count_col < 4)
		{
			write (1, &mat[count_row][count_col], 1);
			write (1, " ", 1);
			count_col++;
		}
		write(1, "\n", 1);
		free(mat[count_row]);
		count_row++;
		count_col = 0;
	}
	free(mat);
}

void	fill_all_matrix(char **mat)
{
	int	count_row;
	int	count_col;

	count_row = 0;
	count_col = 0;
	while (count_row < 4)
	{
		while (count_col < 4)
		{
			mat[count_row][count_col] = 48;
			count_col++;
		}
		count_row++;
		count_col = 0;
	}
}
