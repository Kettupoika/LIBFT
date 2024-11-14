/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:34:22 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/12 15:14:05 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Input requirements: 1:String.\n");
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
	int		nb;
	char	buffer[100];
	ssize_t	bytes_read;
	int		fd;

	(void)argc;

	nb = atoi(argv[1]);

	fd = open("putnbr_test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Failed to open file for writing\n");
		return (0);
	}
	ft_putnbr_fd(nb, fd);
	close(fd);
	fd = open("putnbr_test_file.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Failed to open file for reading\n");
		return (0);
	}
	bytes_read = read(fd, buffer, sizeof(buffer) - 1);
	buffer[bytes_read] = '\0';
	printf("---------------------------------------------------------------------------\n");
	printf("BUFFER OUT = %s\n", buffer);
	printf("---------------------------------------------------------------------------\n");
	printf("The buffer out is written to putnbr_test_file.txt in the test dir\nopen text file to see output to double check it corrosponds\nto the buffer");
	close(fd);
}
