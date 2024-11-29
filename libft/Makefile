# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cstate <cstate@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 11:40:04 by cstate            #+#    #+#              #
#    Updated: 2024/11/29 12:11:31 by cstate           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# The compiler and its flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directory containing header files
INC_DIR = .

# Source files
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_strchr.c ft_strcpy.c ft_strdup.c ft_striteri.c \
	ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

# OBJS is a variable containing all .o filenames.
OBJS := $(SRC:%.c=%.o)

# Rule to compile all object files from source files
# The -I flag specifies the include directory
# %@ is the target, $< is the first prerequisite
%.o: %.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $< 

# Rule to create the library (archive) from object files
# ar rcs:
# r - insert files into the archive, replacing if necessary
# c - create the archive if it does not exist
# s - write an object file index into the archive
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to build the project (default rule)
# This rule depends on the library being created
all: $(NAME)

# Rule to clean up object files
# Removes all compiled object files
clean:
	rm -f $(OBJS)

# Rule to clean up everything, including the library
# Depends on the clean rule
fclean: clean
	rm -f $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	cc -nostartfiles -shared -o libft.so $(OBJS)

# Rule to rebuild everything from scratch
# Calls fclean and then all
re: fclean all

# Special target to indicate that these are not real files
# Prevents make from being confused if there are files with these names
.PHONY: all clean fclean re
