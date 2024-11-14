/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:16:26 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:14:14 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	ft_tolower(int c);

int	main(int argc, char **argv)
{
	//check for argv input variables
	//-------------------------------------------------------
	if (argc == 1)
	{
		printf("Input required: 1:string(uppercase).\n");
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
	char	*src;
	int		i;
	(void)argc;

	src = argv[1];
	i = 0;
	while (src[i])
	{
		src[i] = ft_tolower(src[i]);
		i++;
	}
	printf("------------------------------------------------------------------------\n");
	printf("output string is: %s\n", src);	
	printf("------------------------------------------------------------------------\n");

}
