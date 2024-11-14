# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 11:10:30 by rhvidste          #+#    #+#              #
#    Updated: 2024/11/14 10:06:42 by rhvidste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

TARGET = myprogram

LIB = libft.h

TESTSRC = ./testfiles/

DEST = ./testfiles/tests/

all:	isalpha_test \
		isdigit_test \
		isalnum_test \
		isascii_test \
		isprint_test \
		strlen_test \
		memset_test \
		bzero_test \
		memcpy_test \
		memmove_test \
		strlcpy_test \
		strlcat_test \
		toupper_test \
		tolower_test \
		strchr_test \
		strrchr_test \
		strncmp_test \
		memchr_test \
		memcmp_test \
		strnstr_test \
		atoi_test \
		calloc_test \
		strdup_test \
		substr_test \
		strjoin_test \
		strtrim_test \
		split_test	\
		itoa_test \
		strmapi_test \
		striteri_test \
		putchar_fd_test \
		putstr_fd_test \
		putendl_fd_test \
		putnbr_fd_test
	
# is functions----------------------------------------------------------------------
isalpha_test: $(LIB) $(TESTSRC)ft_isalpha_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_isalpha_test.c ft_isalpha.c -o $(DEST)isalpha_test

isdigit_test: $(LIB) $(TESTSRC)ft_isdigit_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_isdigit_test.c ft_isdigit.c -o $(DEST)isdigit_test

# isalnum includes referece to c function files called within
isalnum_test: $(LIB) $(TESTSRC)ft_isalnum_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_isalnum_test.c ft_isalnum.c \
								ft_isdigit.c ft_isalpha.c -o \
								$(DEST)isalnum_test

isascii_test: $(LIB) $(TESTSRC)ft_isascii_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_isascii_test.c ft_isascii.c -o $(DEST)isascii_test

isprint_test: $(LIB) $(TESTSRC)ft_isprint_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_isprint_test.c ft_isprint.c -o $(DEST)isprint_test
#-----------------------------------------------------------------------------------
strlen_test: $(LIB) $(TESTSRC)ft_strlen_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strlen_test.c ft_strlen.c -o $(DEST)strlen_test
#mem functions----------------------------------------------------------------------
#mem reset functions----------------------------------------------------------------
memset_test: $(LIB) $(TESTSRC)ft_memset_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_memset_test.c ft_memset.c \
									ft_strlen.c -o $(DEST)memset_test

bzero_test: $(LIB) $(TESTSRC)ft_bzero_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_bzero_test.c ft_bzero.c -o $(DEST)bzero_test
#-----------------------------------------------------------------------------------
memcpy_test: $(LIB) $(TESTSRC)ft_memcpy_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_memcpy_test.c ft_memcpy.c \
								ft_strlen.c -o $(DEST)memcpy_test

memmove_test: $(LIB) $(TESTSRC)ft_memmove_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_memmove_test.c ft_memmove.c \
								ft_memcpy.c -o $(DEST)memmove_test
#------------------------------------------------------------------------------------
strlcpy_test: $(LIB) $(TESTSRC)ft_strlcpy_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strlcpy_test.c ft_strlcpy.c -o $(DEST)strlcpy_test
#------------------------------------------------------------------------------------------------
strlcat_test: $(LIB) $(TESTSRC)ft_strlcat_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strlcat_test.c ft_strlcat.c \
								ft_strlen.c -o $(DEST)strlcat_test -lbsd
#-----------------------------------------------------------------------------------
toupper_test: $(LIB) $(TESTSRC)ft_toupper_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_toupper_test.c ft_toupper.c -o $(DEST)toupper_test

tolower_test: $(LIB) $(TESTSRC)ft_tolower_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_tolower_test.c ft_tolower.c -o $(DEST)tolower_test
#-----------------------------------------------------------------------------------
strchr_test: $(LIB) $(TESTSRC)ft_strchr_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strchr_test.c ft_strchr.c -o $(DEST)strchr_test

strrchr_test: $(LIB) $(TESTSRC)ft_strrchr_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strrchr_test.c ft_strrchr.c -o $(DEST)strrchr_test
#-----------------------------------------------------------------------------------
strncmp_test: $(LIB) $(TESTSRC)ft_strncmp_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strncmp_test.c ft_strncmp.c -o $(DEST)strncmp_test
#-----------------------------------------------------------------------------------
memchr_test: $(LIB) $(TESTSRC)ft_memchr_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_memchr_test.c ft_memchr.c -o $(DEST)memchr_test

memcmp_test: $(LIB) $(TESTSRC)ft_memcmp_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_memcmp_test.c ft_memcmp.c -o $(DEST)memcmp_test
#----------------------------------------------------------------------------------
strnstr_test: $(LIB) $(TESTSRC)ft_strnstr_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strnstr_test.c ft_strnstr.c -o $(DEST)strnstr_test

atoi_test: $(LIB) $(TESTSRC)ft_atoi_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_atoi_test.c ft_atoi.c -o $(DEST)atoi_test

calloc_test: $(LIB) $(TESTSRC)ft_calloc_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_calloc_test.c ft_calloc.c \
								ft_bzero.c -o $(DEST)calloc_test
#-----------------------------------------------------------------------------------
strdup_test: $(LIB) $(TESTSRC)ft_strdup_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strdup_test.c ft_strdup.c \
								ft_strlen.c -o $(DEST)strdup_test

substr_test: $(LIB) $(TESTSRC)ft_substr_test.c ft_substr.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_substr_test.c ft_substr.c \
								ft_strlen.c -o $(DEST)substr_test

strjoin_test: $(LIB) $(TESTSRC)ft_strjoin_test.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strjoin_test.c ft_strjoin.c \
								ft_strlen.c -o $(DEST)strjoin_test

strtrim_test: $(LIB) $(TESTSRC)ft_strtrim_test.c ft_strtrim.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strtrim_test.c ft_strtrim.c \
								ft_strlen.c ft_strlcpy.c -o $(DEST)strtrim_test

split_test: $(LIB) $(TESTSRC)ft_split_test.c ft_split.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_split_test.c ft_split.c \
								ft_strlen.c ft_calloc.c ft_bzero.c -o $(DEST)split_test

itoa_test: $(LIB) $(TESTSRC)ft_itoa_test.c ft_itoa.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_itoa_test.c ft_itoa.c \
								ft_strlen.c -o $(DEST)itoa_test

strmapi_test: $(LIB) $(TESTSRC)ft_strmapi_test.c ft_strmapi.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_strmapi_test.c ft_strmapi.c \
								ft_strlen.c ft_toupper.c ft_tolower.c -o $(DEST)strmapi_test

striteri_test: $(LIB) $(TESTSRC)ft_striteri_test.c ft_striteri.c
				$(CC) $(CFLAGS) $(TESTSRC)ft_striteri_test.c ft_striteri.c \
								ft_strlen.c ft_toupper.c ft_tolower.c -o $(DEST)striteri_test
#------------------------------------------------------------------------------------------------
putchar_fd_test: $(LIB) $(TESTSRC)ft_putchar_fd_test.c ft_putchar_fd.c
					$(CC) $(CFLAGS) $(TESTSRC)ft_putchar_fd_test.c ft_putchar_fd.c \
									-o $(DEST)putchar_fd_test

putstr_fd_test: $(LIB) $(TESTSRC)ft_putstr_fd_test.c ft_putstr_fd.c
					$(CC) $(CFLAGS) $(TESTSRC)ft_putstr_fd_test.c ft_putstr_fd.c \
									ft_strlen.c -o $(DEST)putstr_fd_test

putendl_fd_test: $(LIB) $(TESTSRC)ft_putendl_fd_test.c ft_putendl_fd.c
					$(CC) $(CFLAGS) $(TESTSRC)ft_putendl_fd_test.c ft_putendl_fd.c \
									ft_strlen.c -o $(DEST)putendl_fd_test

putnbr_fd_test: $(LIB) $(TESTSRC)ft_putnbr_fd_test.c ft_putnbr_fd.c
					$(CC) $(CFLAGS) $(TESTSRC)ft_putnbr_fd_test.c ft_putnbr_fd.c \
									-o $(DEST)putnbr_fd_test

clean:
		rm -rf $(DEST)*

re:	clean all
