/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:04:27 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/12 16:04:40 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	//check for argv input variables
	//-------------------------------------------------------
	if (argc == 1)
	{
		unsigned char	c;
		c = -1;
		printf("-----------------------------------------------------------------\n");
		while (++c <= 127)
		{
			if (ft_isascii(c) > 0)
				printf("char %c is ascii.\n", c);
			else
				printf("char %d is not ascii.\n", c);
		}
		printf("-----------------------------------------------------------------\n");
		printf("Input arguement required: 1:char");
		return (0);
		printf("Input required: 1:char.\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("too many input arguments\n");
		return (0);
	}
	else if (argc < 2)
	{
		printf("missing argument input paramaters\n");
		return (0);
	}
	//------------------------------------------------------

	char	c;
	(void)argc;
	c = argv[1][0];

	printf("------------------------------------------------------------------------------------------\n");
	if (ft_isascii(c) > 0)
		printf("character is ascii.\n");
	else
		printf("character is not ascii.\n");
	printf("------------------------------------------------------------------------------------------\n");
}
