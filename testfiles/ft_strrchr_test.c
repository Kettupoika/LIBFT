/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:12:48 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:18:25 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c);

int	main(int argc, char **argv)
{
	//check for argv input variables
	//-------------------------------------------------------
	if (argc == 1)
	{
		printf("required input arguments are 1:string 2:char. \n");
		return (0);
	}
	else if (argc > 3)
	{
		printf("too many input arguments.\n");
		return (0);
	}
	else if (argc < 3)
	{
		printf("too few input arguments.\n");
		return (0);
	}
	//------------------------------------------------------
	char	*str;
	char	c;
	char	*res;

	str = argv[1];
	c = argv[2][0];

	res = ft_strrchr(str, (int)c);

	printf("------------------------------------------------------------------------\n");
	printf("result of ft_strrchr is: 	%s\n", res);
	printf("------------------------------------------------------------------------\n");
}
