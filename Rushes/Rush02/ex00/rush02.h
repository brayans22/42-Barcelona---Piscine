/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaiago- <bsaiago-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:36:05 by bsaiago-          #+#    #+#             */
/*   Updated: 2023/07/25 16:50:22 by bsaiago-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

typedef struct s_dict
{
	int				key;
	char			*value;
}t_dict;

char	*get_key(int fd);
char	*get_value(int fd, char *character);
t_dict	*process_file(char *file_dict);

#endif
