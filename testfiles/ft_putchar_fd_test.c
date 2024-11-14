/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:09:02 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/08 16:52:06 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	//------------------------------------------------------------------------
	if (argc == 1)
	{
		printf("Input required: 1:char\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("Too many input arguments. \n");
		return (0);
	}
	if (argc < 2)
	{
		printf("Too few input arguments. \n");
		return (0);
	}
	//------------------------------------------------------------------------
	int		fd;
	char	buffer[2];
	char	test_char;
	
	test_char = argv[1][0];
	//---------------------------------------------------------------------
	fd = open("putchr_test_file.txt", O_WRONLY | O_CREAT |  O_TRUNC,  0644);
	if (fd == -1)
	{
		printf("Test failed: could not open test file\n");
		return (0);
	}
	ft_putchar_fd(test_char, fd);
	close(fd);
	//--------------------------------------------------------------------
	fd = open("putchr_test_file.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Test failed: Could not open test file for reading\n");
		return (0);
	}
	read(fd,  buffer, 1);
	printf("--------------------------------------------------------------\n");
	printf("BUFFER OUT = %s\n", buffer);
	printf("--------------------------------------------------------------\n");
	printf("The buffer out is written to putchar_text_file.txt in test dir\nopen text file to see output to double check it corrosponds\nto the buffer\n");
}
