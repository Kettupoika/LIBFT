/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:58:02 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:09:45 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	ft_toupper(int c);

int	main(int argc, char **argv)
{
	//check for argv input variables
	//-------------------------------------------------------
	if (argc == 1)
	{
		printf("required input: 1:string(lowercase)");
		return (0);
	}
	if (argc > 2)
	{
		printf("too many input arguments\n");
		return (0);
	}
	else if (argc < 2)
	{
		printf("missing argument input paramaters\n");
		return (0);
	}
	//------------------------------------------------------

	char	*src;
	int		i;
	(void)argc;

	src = argv[1];
	i = 0;
	while (src[i])
	{
		src[i] = ft_toupper(src[i]);
		i++;
	}
	printf("-----------------------------------------------------------\n");
	printf("output string is: %s\n", src);
	printf("-----------------------------------------------------------\n");
}
