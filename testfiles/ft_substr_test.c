/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:38:40 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/08 18:38:36 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);
int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Input requirements: 1: string(src), 2: offset(int), 3:len(int))\n");
		return (0);
	}
	if (argc > 4)
	{
		printf("Too many input arguments.\n");
		return (0);
	}
	if (argc < 4)
	{
		printf("Too few input arguments.\n");
		return (0);
	}
	char	*src;
	char	*dest;
	int		offset;
	int		len;

	src = argv[1];
	offset = atoi(argv[2]);
	len = atoi(argv[3]);

	if (ft_substr(src, offset, len) == NULL)
		printf("NULL");
	else
	{
		dest = ft_substr(src, offset, len);
		printf("dest: %s\n", dest);
	}
}
