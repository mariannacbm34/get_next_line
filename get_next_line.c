/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:27:54 by marmonte          #+#    #+#             */
/*   Updated: 2023/02/27 16:42:22 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*line;
	int			i;

	line = 0;
	i = 0;
	if (fd < 0 || BUFFER_SIZE < 1)
	{
		while (buff[i])
			buff[i++] = 0;
		return (NULL);
	}
	while (buff[0] || read(fd, buff, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buff);
		if (clean_buff(buff))
			break ;
	}
	return (line);
}
