/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:16:46 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:05:15 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//#include <stdio.h>

//void	*ft_memmove(void *dst, const void *src, size_t n);
static size_t	rs_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("Input required: 1:string, 2:offset(int)\n");
		return (0);
	}
	if(argc > 3)
	{
		printf("Too many inputs.\n");
		return (0);
	}
	if (argc < 3)
	{
		printf("Too few inputs.\n");
		return (0);
	}

	char		*src;
	char		*dest;
	size_t		offset;
	size_t		len;

	(void)argc;

	src = argv[1];
	offset = atoi(argv[2]);
	len = rs_strlen(src) + 1;
	dest = malloc(sizeof(char) * len);
	ft_memmove(dest, src, len);
	ft_memmove(dest + offset, dest, len - offset - 1);
	printf("----------------------------------------------------------------------\n");
	printf("ft_output:		%s\n", dest);
	printf("----------------------------------------------------------------------\n");
	
	dest = malloc(sizeof(char) * len);
	memmove(dest, src, len);
	memmove(dest + offset, dest, len - offset - 1);
	printf("----------------------------------------------------------------------\n");
	printf("sys_output:		%s\n", dest);
	printf("----------------------------------------------------------------------\n");

}
