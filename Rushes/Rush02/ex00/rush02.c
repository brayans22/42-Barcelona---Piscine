/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-nm <maria-nm@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:44:37 by maria-nm          #+#    #+#             */
/*   Updated: 2023/07/25 16:28:39 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "rush02.h"

int				ft_atoi(const char *str);
char			*ft_strdup(char *src);

char	*get_key(int fd)
{
	unsigned int		i;
	char				character[1];
	char				*str;

	i = 0;
	str = malloc (sizeof(char) * 128);
	if (!str)
		return (NULL);
	read(fd, character, 1);
	while (character[0] == '\n')
		read(fd, character, 1);
	while (character[0] >= '0' && character[0] <= '9')
	{
		str[i] = character[0];
		read(fd, character, 1);
		i++;
	}
	return (str);
}

char	*get_value(int fd, char *character)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc (sizeof(char) * 128);
	if (!str)
		return (NULL);
	while (character[0] != '\n')
	{
		str[i] = character[0];
		read(fd, character, 1);
		i++;
	}
	return (str);
}

void	fill_dict_struct(int fd, char character[1], t_dict *dict)
{
	char	*tmp;
	int		i;

	i = 0;
	while (i < 32)
	{
		dict[i].key = ft_atoi(get_key(fd));
		read(fd, character, 1);
		while (character[0] == ' ')
			read(fd, character, 1);
		if (character[0] == ':')
			read(fd, character, 1);
		while (character[0] == ' ')
			read(fd, character, 1);
		tmp = get_value(fd, character);
		dict[i].value = ft_strdup(tmp);
		free(tmp);
		i++;
	}
}

t_dict	*process_file(char *file_dict)
{
	int		fd;
	char	character[1];
	t_dict	*dict;

	fd = open(file_dict, O_RDONLY);
	dict = malloc (sizeof(t_dict) * 33);
	if (!fd || !dict)
		return (NULL);
	fill_dict_struct(fd, character, dict);
	close(fd);
	return (dict);
}
