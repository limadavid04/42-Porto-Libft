/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:51:15 by dlima             #+#    #+#             */
/*   Updated: 2022/12/20 14:01:26 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*new_read(int fd)
{
	char	*buff;
	int		bytes_read;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	bytes_read = read(fd, buff, BUFFER_SIZE);
	if (bytes_read == 0 || bytes_read == -1)
	{
		free(buff);
		return (NULL);
	}
	buff[bytes_read] = '\0';
	return (buff);
}

char	*expand_buffer(char *buff, char *new)
{
	char	*new_buff;

	if (!buff)
	{
		new_buff = malloc(sizeof(char) * (ft_strlen(new) + 1));
		ft_strlcpy(new_buff, new, ft_strlen(new) + 1);
		free(new);
		return (new_buff);
	}
	new_buff = malloc(sizeof(char) * (ft_strlen(buff) + ft_strlen(new) + 1));
	ft_strlcpy(new_buff, buff, ft_strlen(buff) + 1);
	ft_strlcat(new_buff, new, (ft_strlen(buff) + ft_strlen(new) + 1));
	free(buff);
	free(new);
	return (new_buff);
}

char	*shrink_buff(char *buff)
{
	char		*new_buff;
	int			new_buff_len;
	size_t		len;

	len = ft_strlen(buff) - ft_strlen(ft_strchr(buff, '\n')) + 1;
	if (len == ft_strlen(buff))
	{
		free(buff);
		return (NULL);
	}
	new_buff_len = ft_strlen(buff) - len;
	new_buff = malloc(sizeof(char) * (new_buff_len + 1));
	ft_strlcpy(new_buff, ft_strchr(buff, '\n') + 1, new_buff_len + 1);
	free(buff);
	return (new_buff);
}

char	*get_line(char *buff)
{
	int		len;
	char	*line;

	if (!ft_strchr(buff, '\n'))
	{
		len = ft_strlen(buff);
		line = malloc(sizeof(char) * (len + 1));
		ft_strlcpy(line, buff, len + 1);
		return (line);
	}
	len = ft_strlen(buff) - ft_strlen(ft_strchr(buff, '\n')) + 1;
	line = malloc(sizeof(char) * (len + 1));
	ft_strlcpy(line, buff, len + 1);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buff[4096];
	char		*newly_read;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 0 || fd > 4096)
		return (NULL);
	if (ft_strchr(buff[fd], '\n'))
	{
		line = get_line(buff[fd]);
		buff[fd] = shrink_buff(buff[fd]);
		return (line);
	}
	newly_read = new_read(fd);
	if (!newly_read)
	{
		if (!buff[fd])
			return (NULL);
		line = get_line(buff[fd]);
		free(buff[fd]);
		buff[fd] = NULL;
		return (line);
	}
	buff[fd] = expand_buffer(buff[fd], newly_read);
	return (get_next_line(fd));
}
