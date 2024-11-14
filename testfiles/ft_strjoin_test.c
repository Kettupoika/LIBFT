/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:29:43 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 10:28:28 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(int argc, char **argv)
{
		if (argc == 1)
		{
			printf("required input: 1:string one, 2:string two\n");
			return (0);
		}
		if (argc > 3)
		{
			printf("Too many input arguments.\n");
			return (0);
		}
		if (argc < 3)
		{
			printf("Too few input arguments.\n");
			return (0);
		}
		char	*s1;
		char	*s2;
		char	*dest;

		s1 = argv[1];
		s2 = argv[2];
		
		if (ft_strjoin (s1, s2) == NULL)
			printf("NULL");
		else
		{
			dest = ft_strjoin (s1, s2);
			printf("-------------------------------------------------------------------\n");
			printf("out = %s\n", dest);
			printf("-------------------------------------------------------------------\n");
		}
		//free(dest);

		
}
