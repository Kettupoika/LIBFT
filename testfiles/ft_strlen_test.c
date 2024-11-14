/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:59:36 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 10:00:59 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

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
		printf("missing argument input paramaters\n");
		return (0);
	}
	//------------------------------------------------------

	char	*str;
	(void)argv;

	str = argv[1];
	printf("-------------------------------------------------------------------\n");
	printf("the len of the string is: %zu\n", ft_strlen(str));
	printf("-------------------------------------------------------------------\n");
}
