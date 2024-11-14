/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:24:27 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 11:34:25 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

int		rs_strlen(char *str);
size_t ft_strlcpy(char *dest, const char *src, size_t size);

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
		printf("missing argument input paramater: String \n");
		return (0);
	}
	//------------------------------------------------------

	char	*src;
	char	*dest;
	size_t	size;
	size_t	len;
	size_t	i;
	(void)argc;

	src = argv[1];
	size = rs_strlen(src) + 1;
	dest = malloc(sizeof(char) * size);
	len = ft_strlcpy(dest, src, size);
	i = 0;
	printf("----------------------------------------------------\n");
	printf("dest string after lcpy operation:\n");
	printf("----------------------------------------------------\n");
	while (i < len + 1)
	{
		if(dest[i] == '\0')
			printf("dest[%zu] = \\0\n", i);
		else
			printf("dest[%zu] = %c\n", i, dest[i]);
		i++;
	}
	printf("----------------------------------------------------\n");
	printf("string len is: %zu\n", len);
	printf("----------------------------------------------------\n");
}

int		rs_strlen(char *str)
{
	int		i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
