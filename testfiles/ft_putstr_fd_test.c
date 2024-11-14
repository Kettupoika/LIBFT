/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:11:40 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/12 15:11:29 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Input requirements: 1:string.\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("Too many input arguments.\n");
		return (0);
	}
	if (argc < 2)
	{
		printf("Too few input arguments.\n");
		return (0);
	}
	char	*str;
	char	buffer[100];
	ssize_t	bytes_read;
	int		fd;

	(void)argc;

	str = argv[1];

	fd = open("putstr_test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Failed to open file for writing\n");
		return (0);
	}
	ft_putstr_fd(str, fd);
	close(fd);
	fd = open("putstr_test_file.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Failed to open fiel for reading\n");
		return (0);
	}
	bytes_read = read(fd, buffer, sizeof(buffer) - 1);
	buffer[bytes_read] = '\0';
	printf("--------------------------------------------------------------\n");
	printf("BUFFER OUT = %s\n", buffer);
	printf("--------------------------------------------------------------\n");
	printf("The buffer out is written to putstr_text_file.txt in test dir\nopen text file to see output to double check it corrosponds\nto the buffer\n");
	close(fd);
}
