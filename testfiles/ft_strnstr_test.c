/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:09:26 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:35:37 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		main(int argc, char **argv)
{
	//------------------------------------------------------------------------
	if (argc == 1)
	{
		printf("required input variables are: 1:long string 2:search word(smaller string) 3:len");
		return (0);
	}
	else if (argc < 4)
	{
		printf("Too few input arguments. \n");
		return (0);
	}
	else if (argc > 4)
	{
		printf("Too many input arguments. \n");
		return (0);
	}
	//-------------------------------------------------------------------------
	char	*big;
	char	*little;
	int		len;

	big = argv[1];
	little = argv[2];
	len = atoi(argv[3]);
	
	//When printing NULL it creates unexpected seg fault so you need to include extra null check
	printf("--------------------------------------------------------------------------\n");
	if (ft_strnstr(big, little, len) == NULL)
	{
		printf("NULL");
	}
	else
		printf("%s\n", ft_strnstr(big, little, len));	
	printf("--------------------------------------------------------------------------\n");
	//printf("%s\n", ft_strnstr(big, little, len));
	//res = ft_strnstr(big, little, len);
		
	//printf("%s\n", res);
}

//to use vim debugger:
// cc -g filename
// gdb -tui a.out
// break (function name) 
// run
// display (variable name)
// n + enter
