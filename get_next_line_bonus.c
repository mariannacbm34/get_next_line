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

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buff[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;

	line = 0;
	if (read(fd, NULL, 0) < 0 || BUFFER_SIZE < 1)
		return (NULL);
	while (buff[fd][0] || read(fd, buff[fd], BUFFER_SIZE) >= 1)
	{
		line = ft_strjoin(line, buff[fd]);
		if (clean_buff(buff[fd]))
			break ;
	}
	return (line);
}