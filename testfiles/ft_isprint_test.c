/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:22:00 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 09:52:31 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	char	c;

	c = 0;

	if (argc == 1)
	{
		printf("ALL-ASCII VALUES:\n");
		printf("---------------------------------------------------\n");
		while (c < 127)
		{
			if (c == 32)
			{
				printf("---------------------------------------------------\n");
				printf("char %c is printable.\n", c);
			}
			else if (ft_isprint(c) > 0)
				printf("char %c is printable.\n", c);
			else
				printf("char %d is not printable.\n", c);
			
			c++;
		}
		printf("---------------------------------------------------\n");
		printf("Input required: 1:char\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("Too many input arguments\n");
		return (0);
	}
	if (argc < 2)
	{
		printf("Too few input arguments\n");
		return (0);
	}

	c = argv[1][0];
	if (ft_isprint(c) > 0)
	{
		printf("character is printable\n");
		return (0);
	}
	else
	{
		printf("character is not printable\n");
		return (0);
	}
}
