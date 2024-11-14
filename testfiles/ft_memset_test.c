/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:10:04 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 10:09:54 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Input requirements, 1:string, 2:char, 3:len(int)");
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
	char	*str;
	char	c;
	size_t	n;

	str = argv[1];
	c = argv[2][0];
	n = atoi(argv[3]);
	if (n > ft_strlen(str))
	{
		printf("-------------------------------------------------------------\n");
		printf("n-len exceeds the len of string\n");
		printf("the len of input string is %zu.\n", ft_strlen(str));
		printf("-------------------------------------------------------------\n");
		return (0);
	}
	ft_memset(str, c, n);
	printf("-------------------------------------------------------------\n");
	printf("%s\n", str);
	printf("-------------------------------------------------------------\n");

}
