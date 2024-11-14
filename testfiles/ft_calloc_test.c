/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:46:33 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 14:41:20 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//#include <stdio.h>
//#include <stdlib.h>

//void	*ft_calloc(size_t  nmemb, size_t n);
//size_t	rs_strlen(const char *str);
static size_t	rs_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Input required: 1:string.\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("Too many input arguments\n");
		return (0);
	}
	if (argc < 2)
	{
		printf("Too few input arguments\n");
		return (0);
	}

	char	*str;
	size_t	i;
	size_t	len;

	(void)argc;

	str = argv[1];
	len = rs_strlen(str) + 1;
	str = (char *)ft_calloc(len, sizeof(char));
	printf("----------------------------------------------------------\n");
	i = 0;
	while (i < len)
	{
		printf("%d", str[i++]);
	}
	printf("\n");
	printf("----------------------------------------------------------\n");
}


