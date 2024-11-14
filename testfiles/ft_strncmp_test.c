/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:24:01 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:21:12 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		main(int argc, char **argv)
{
	//------------------------------------------------
	if (argc == 1)
	{
		printf("Input requirments are 1:string, 2:string 3:len\n");
		return (0);
	}
	else if (argc > 4)
	{
		printf("Too many input arguments.\n");
		return (0);
	}
	if (argc < 4)
	{
		printf("Too few input arguments.\n");
		return (0);
	}
	//------------------------------------------------
	(void)argc;

	char	*s1;
	char	*s2;
	int		size;
	int		res;

	s1 = argv[1];
	s2 = argv[2];
	size = atoi(argv[3]);

	res = ft_strncmp(s1, s2, size);
	printf("------------------------------------------------------------------------\n");
	printf("result of strncmp is:	 %d.\n", res);
	printf("------------------------------------------------------------------------\n");
}
