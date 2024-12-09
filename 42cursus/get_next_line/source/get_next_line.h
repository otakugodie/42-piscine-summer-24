/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegfern <diegfern@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:08:21 by diegfern          #+#    #+#             */
/*   Updated: 2024/12/11 17:52:45 by diegfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#  define BUFFER_SIZE 100

#  include <fcntl.h>
#  include <stdio.h>
#  include <stdlib.h>
#  include <unistd.h>

char	*get_next_line(int fd);

# endif