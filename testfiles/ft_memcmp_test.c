/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:39:14 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:31:04 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int		main(int argc, char **argv)
{
	//-------------------------------------------------------------
	if (argc == 1)
	{
		printf("input requirements are 1:string, 2:string 3:len\n");
		return (0);
	}
	else if (argc > 4)
	{
		printf("Too many input argumenrs.\n");
		return (0);
	}
	if (argc < 4)
	{
		printf("Too few input arguments. \n");
		return (0);
	}
	//-------------------------------------------------------------
	(void)argc;

	char	*s1;
	char	*s2;
	int		size;
	int		res;

	s1 = argv[1];
	s2 = argv[2];
	size = atoi(argv[3]);

	res = ft_memcmp(s1, s2, size);

	printf("------------------------------------------------------------------------\n");
	printf("result of memcmp is %d.\n", res);
	printf("------------------------------------------------------------------------\n");
}
