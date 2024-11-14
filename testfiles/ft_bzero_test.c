/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:41:50 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 10:26:47 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
	if (argc == 1)
	{
		int	i;
		int	len;
		int	arr[] = {1,2,3,4,5,6,7,8,9,10};

		len = sizeof(arr) / sizeof(arr[0]);
		i = 0;
		printf("input of the arr before element is set to 0:\n");
		printf("------------------------------------------------------\n");
		while (i < len)
		{
			printf("arr[%d] = %d\n", i, arr[i]);
			i++;
		}
		printf("------------------------------------------------------\n");

		ft_bzero(arr, sizeof(arr));
		
		printf("output of the arr after every element is set to 0:\n");
		printf("------------------------------------------------------\n");
		i = 0;
		while (i < len)
		{
			printf("arr[%d] = %d\n", i, arr[i]);
			i++;
		}
		printf("------------------------------------------------------\n");
		printf("Input required: 1:string\n");
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
	size_t	len;
	size_t	i;

	str = argv[1];
	len = rs_strlen(str) + 1;
	i = 0;
	ft_bzero(str, len);

	printf("---------------------------------------------------------\n");
	printf("output is	:");
	while (i < len)
	{
		printf("%d", str[i++]);
	}
	printf("\n");
	printf("---------------------------------------------------------\n");
}
