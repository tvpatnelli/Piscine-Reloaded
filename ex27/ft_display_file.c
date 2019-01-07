/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:47:58 by vpatnell          #+#    #+#             */
/*   Updated: 2018/11/22 17:41:56 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int arc, char **arv)
{
	int		fd;
	char	c;

	fd = open(arv[1], O_RDONLY);
	if (arc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (arc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	while (read(fd, &c, 1) > 0)
		write(1, &c, 1);
	close(fd);
	return (0);
}
