/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:11:15 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/08 12:28:47 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	test_func(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("required input, 1:string.\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("Too many input argumentsi.\n");
		return (0);
	}
	if (argc < 2)
	{
		printf("Too few input argurments.\n");
		return (0);
	}
	char	*src;
	char	*res;

	(void)argc;

	src = argv[1];

	res = ft_strmapi(src, &test_func);

	printf("--------------------------------------------------------------------\n");
	printf("output of ft_strmappi is:\n ");
	printf("--------------------------------------------------------------------\n");
	if (res == NULL)
		printf("NULL\n");
	else
		printf("%s\n", res);	
	printf("--------------------------------------------------------------------\n");
}
