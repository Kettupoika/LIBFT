/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:53:44 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 10:49:17 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	//check for argv input variables
	//-------------------------------------------------------
	if (argc == 1)
	{
		printf("Input required: 1:string\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("too many input arguments\n");
		return (0);
	}
	else if (argc < 2)
	{
		printf("missing argument input paramater: string\n");
		return (0);
	}
	//------------------------------------------------------

	char	*src;
	char	*dest;
	int		len;
	int		i;
	(void)argc;
	
	src = argv[1];
	len = ft_strlen(src) + 1;
	dest = malloc(sizeof(char) * len);
	ft_memcpy(dest, src, len);
	i = 0;
	printf("---------------------------------------------------------\n");
	while (i < len)
	{
		if (dest[i] == '\0')
			printf("dest[%d] = \\0\n", i);
		else
			printf("dest[%d] = %c\n", i, dest[i]);
		i++;
	}
	printf("---------------------------------------------------------\n");
}
