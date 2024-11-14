/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:01:48 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:28:43 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(int argc, char **argv)
{
		//check for argv input variables-----------------------------
		if (argc == 1)
		{
			printf("Input requiremends: 1:string, 2:char, 3:int \n");
			return (0);
		}
		if (argc > 4)
		{
			printf("Too many input arguments.\n");
			return (0);
		}
		else if (argc < 4)
		{
			printf("Too few input arguments.\n");
			return (0);
		}
		//----------------------------------------------------------

		char	*str;
		void	*res;
		char	c;
		int		size;

		str = argv[1];
		c = argv[2][0];
		size = atoi(argv[3]);

		res = ft_memchr(str, (int)c, size);
		printf("-------------------------------------------------------\n");
		printf("return of memchr as a void pointer is : %p\n", res);
		printf("-------------------------------------------------------\n");
		printf("return of memchr as a str pointer is  : %s\n", (char *)res);
		printf("-------------------------------------------------------\n");
}
