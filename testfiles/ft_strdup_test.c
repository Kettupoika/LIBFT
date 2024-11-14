/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:03:20 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 14:56:23 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//#include <stdio.h>
//#include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *src);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("required input arguments: 1:string.\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("Too many input arguments.\n");
		return (0);
	}
	if (argc < 2)
	{
		printf("Too few input arguments. \n");
		return (0);
	}
	char	*src;
	char	*dest;
	int		len;
	int		i;

	src = argv[1];
	dest = ft_strdup(src);
	len = ft_strlen(dest) + 1;
	printf("------------------------------------------------------------------\n");
	if (dest == NULL)
		printf("NULL");
	else
		printf("%s\n", dest);	
	printf("------------------------------------------------------------------\n");
	i = 0;
	while (i < len)
	{
		if (dest[i] == '\0')
			printf("dest[%d] = \\0\n", i);
		else
			printf("dest[%d] = %c\n", i, dest[i]);
		i++;
	}	
	printf("------------------------------------------------------------------\n");
	free(dest);
}
