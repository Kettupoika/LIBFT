/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:33:30 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/11 13:00:30 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"
#include <bsd/string.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("required input arguments, 1:destination string, 2:src string, 3:len\n");
		return (0);
	}
	char	*dest;
	char	*src;
	size_t	dest_len;
	size_t	len;
	size_t	i;
	size_t	n;

	dest = argv[1];
	src = argv[2];
	n = atoi(argv[1]);

	len = ft_strlcat(dest, src, n);
	dest_len = ft_strlen(dest);
	
	printf("------------------------------------------------------------------------\n");
	printf("ft strlcat:\n");
	printf("------------------------------------------------------------------------\n");
	i = 0;
	printf("len is %zu\n", len);
	printf("dest is %s\n", dest);
	while (i < len + dest_len + 2)
	{
		if (dest[i] == '\0')
			printf("dest[%zu] = \\0\n", i);
		else
			printf("dest[%zu] = %c\n", i, dest[i]);
		i++;
	}
	printf("------------------------------------------------------------------------\n");	
	len = ft_strlcat(dest, src, n);
	dest_len = strlen(dest);
	printf("system strlcat:\n");
	printf("------------------------------------------------------------------------\n");
	i = 0;
	printf("len is %zu\n", len);
	printf("dest is %s\n", dest);
	while (i < len + dest_len + 2)
	{
		if (dest[i] == '\0')
			printf("dest[%zu] = \\0\n", i);
		else
			printf("dest[%zu] = %c\n", i, dest[i]);
		i++;
	}
	printf("------------------------------------------------------------------------\n");


}

//size_t	ft_strlcat(char *dst, const char *src, size_t size);
//int		rs_strlen(char *str);

//int	main()
//{
//	
//	//char	*src;
//	//char	*dst;
//	char	dst[1024] = "First ";
//	char	src[] = "Second";
//	size_t	len;
//	size_t	i;
//
//	//(void)argc;
//
//	//src = argv[1];
//	//dst = argv[2];
//
//	len = ft_strlcat(dst, src, sizeof(dst));
//	i = 0;
//
//	printf("--------------------------------------------------\n");
//	printf("destination string after concatenation:\n");
//	printf("--------------------------------------------------\n");
//	while (i < len + 1)
//	{
//		if (dst[i] == '\0')
//			printf("dst[%zu] = \\0\n", i);
//		else
//			printf("dst[%zu] = %c\n", i, dst[i]);
//		i++;
//	}
//	printf("--------------------------------------------------\n");
//	printf("joined string len is: %zu\n", len);
//	printf("--------------------------------------------------\n");
//}
//
//int	rs_strlen(char *str)
//{
//	int	i;
//	i = 0;
//	while (str[i])
//		i++;
//	return (i);
//}
