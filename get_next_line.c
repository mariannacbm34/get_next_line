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
	static char	buff[BUFFER_SIZE + 1];
	char		*line;

	line = 0;
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	while (buff[0] || read(fd, buff, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buff);
		if (clean_buff(buff))
			break ;
	}
	return (line);
}

/*#include "get_next_line.h"
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	int		fd = 0;
	char	*tmp = NULL;
	int		i = 0;

	fd = open("./fd_test.txt", O_RDONLY);
	while (i < 10)
	{
		printf("Is get_next_line working?:%s", tmp = get_next_line(fd));
		if (tmp)
			free(tmp);
		tmp = NULL;
		i++;
	}
	close(fd);
}
*/