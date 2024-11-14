/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:06:36 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/08 09:43:55 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("input argument required, 1:string(number)");
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
	int		i;
	int		n;
	int		len;
	char	*dest;

	(void)argc;

	n = atoi(argv[1]);
	dest = ft_itoa(n);
	len = ft_strlen(dest) + 1;

	
	printf("-------------------------------------------------------------------------\n");
	printf("%s\n", dest);
	printf("-------------------------------------------------------------------------\n");
	i = 0;
	printf("-------------------------------------------------------------------------\n");
	while (i < len)
	{
		if (dest[i] == '\0')
			printf("dest[%d] = \\0\n", i);
		else
			printf("dest[%d] = %c\n", i, dest[i]);
		i++;
	}
	printf("-------------------------------------------------------------------------\n");

}
