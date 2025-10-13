CC := cc
FLAGS := -Wall -Wextra -Werror

NAME := rush-02
INCLUDES_DIR := includes
SOURCES_DIR := srcs
INCLUDE_FILES := ft_dict.h
SOURCE_FILES := main.c \
				free.c \
				exit.c \
				init.c \
				ft_error.c \
				parsing.c \
				valid_key_value.c \
				ft_are_duplicates.c \
				ft_strs_in_strs.c \
				string.c \
				is_string.c \
				ft_strcmp.c \
				ft_split.c \
				io_operations_basics.c \
				ft_read_input.c \
				ft_get_file_size \
				get_file_content \
				keys.c \
				origin_keys.c \
				values.c \
				ft_get_index.c \
				ft_print_value.c \
				ft_print_trio.c

INCLUDES := $(addprefix $(INCLUDES_DIR)/,$(INCLUDE_FILES))
SOURCES := $(addprefix $(SOURCES_DIR)/,$(SOURCE_FILES))
OBJECTS := $(addsuffix .o,$(basename $(SOURCES)))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS): %.o: %.c $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@ -I $(INCLUDES_DIR)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
