/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:38:01 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/07 13:27:53 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);
size_t	ft_strlen(const char *s);

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Input required: 1:string, 2:charset(characters to trim)");
		return (0);
	}
	if (argc > 3)
	{
		printf("Too many input arguments");
		return (0);
	}
	if (argc < 3)
	{
		printf("Too few input arguments");
		return (0);
	}
	char	*src;
	char	*dest;
	char	*set;
	size_t		len;
	size_t		i;

	(void)argc;

	src = argv[1];
	set = argv[2];

	if (ft_strtrim(src, set) == NULL)
		printf("NULL\n");
	else
	{
		dest = ft_strtrim(src, set);
		printf("-----------------------------------------------------------------------------\n");
		printf("dest: %s\n", dest);
		printf("-----------------------------------------------------------------------------\n");
	}
	len = ft_strlen(dest) + 1;
	i = 0;

	printf("-----------------------------------------------------------------------------\n");
	while (i < len)
	{
		if(dest[i] == '\0')
			printf("dest[%zu] = \\0\n", i);
		else
			printf("dest[%zu] = %c\n", i, dest[i]);
		i++;
	}
	printf("-----------------------------------------------------------------------------\n");

	free(dest);
}
