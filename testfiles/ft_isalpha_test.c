/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:52:38 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/12 15:30:33 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
			if (ft_isalpha(c) > 0)
				printf("char %c is alpha.\n", c);
			else
				printf("char %d is not alpha.\n", c);
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
	char	c;
	(void)argc;

	c = argv[1][0];
	printf("------------------------------------------------------\n");
	if (ft_isalpha(c) > 0)
		printf("char is alpha.\n");
	else
		printf("char is not alpha.\n");	
	printf("-------------------------------------------------------\n");
}
