/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:59:54 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/07 13:21:27 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>


int		main(int argc, char **argv)
{	
	if (argc == 1)
	{
		printf("Input required: 1:src string with delimiters, 2:deliminter (char)");
		return(0);
	}
	if (argc > 3)
	{
		printf("Too many input arguments.\n");
		return (0);
	}
	if (argc < 3)
	{
		printf("Too few input arguments. \n");
		return (0);
	}

	char	*src;
	char	**dest;
	char	c;
	int		i;

	(void)argc;

	src = argv[1];
	c = argv[2][0];

	dest = ft_split(src, c);

	i  = 0;
	while (dest[i])
	{
		printf("-----------------------------------------------------------------------------------\n");
		printf("%s\n", dest[i++]);
		printf("-----------------------------------------------------------------------------------\n");
	}
	if (dest[i] == NULL)
	{
		printf("-----------------------------------------------------------------------------------\n");
		printf("NULL\n");
		printf("-----------------------------------------------------------------------------------\n");
	}
}
