/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:27:43 by marmonte          #+#    #+#             */
/*   Updated: 2023/02/10 16:45:24 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char		*get_next_line(int fd);
size_t		ft_strlen(char *str);
char		*ft_strjoin(char *str1, char *str2);
void		clean_buff(char *buff);

#endif