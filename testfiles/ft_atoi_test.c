/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:54:56 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:45:32 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
// check if this^ dir is correct

int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Input required: 1:int)\n");
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
	
	int	src;
	int	src2;
	(void)argc;

	src = ft_atoi(argv[1]);
	printf("-----------------------------------------------------------------------\n");
	printf("ft_atoi is: %d\n", src);
	printf("-----------------------------------------------------------------------\n");
	src2 = atoi(argv[1]);
	printf("-----------------------------------------------------------------------\n");
	printf("sys atoi is: %d\n", src2);
	printf("-----------------------------------------------------------------------\n");
}
