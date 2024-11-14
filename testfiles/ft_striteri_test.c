/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:06:26 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/12 16:12:40 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//void	ft_striter(char *s, void (*f)(unsigned int, char*));

static void	test_func(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);
	else
		*c = ft_tolower(*c);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Input required: 1:String.\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("Too many input arguments.\n");
		return (0);
	}
	if (argc < 2)
	{
		printf("Too few input arguments.\n");
		return (0);
	}
	char	*src;

	(void)argc;

	src = argv[1];

	ft_striteri(src, &test_func);
	printf("%s\n", src);

}
