/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:52:42 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/12 16:03:25 by rhvidste         ###   ########.fr       */
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
			if (ft_isdigit(c) > 0)
				printf("char %c is digit.\n", c);
			else
				printf("char %d is not digit.\n", c);
		}
		printf("-----------------------------------------------------------------\n");
		printf("Input arguement required: 1:char");
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

	char	a;
	(void)argc;

	a = argv[1][0];
	printf("---------------------------------------------------------\n");
	if (ft_isdigit(a) > 0)
		printf("Char is digit.\n");
	else
		printf("Char is not digit.\n");
	printf("---------------------------------------------------------\n");
}
