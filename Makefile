NAME = libmx.a
COMP = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -g
SRCD = src
INCD = inc
OBJD = obj
INC = libmx.h
INCS = $(addprefix $(INCD)/, $(INC))
SRC = 	mx_binary_search.c mx_bubble_sort.c mx_foreach.c mx_print_strarr.c mx_print_unicode.c  mx_printchar.c mx_printint.c mx_printstr.c mx_quicksort.c mx_strlen.c mx_pow.c mx_sqrt.c mx_nbr_to_hex.c mx_hex_to_nbr.c mx_itoa.c mx_strnew.c mx_str_reverse.c mx_strcmp.c mx_strcpy.c mx_strdup.c mx_swap_char.c mx_strdel.c mx_del_strarr.c mx_get_char_index.c mx_strndup.c mx_strncpy.c mx_strcat.c  mx_strstr.c mx_get_substr_index.c mx_strncmp.c mx_count_substr.c mx_count_words.c mx_strtrim.c mx_isspace.c mx_del_extra_spaces.c mx_strsplit.c mx_count_letters.c mx_strjoin.c mx_file_to_str.c mx_replace_substr.c mx_read_line.c mx_memset.c mx_memcpy.c mx_memccpy.c mx_memcmp.c mx_memchr.c mx_memrchr.c mx_memmem.c mx_memmove.c mx_realloc.c mx_create_node.c mx_push_front.c mx_push_back.c mx_pop_front.c mx_pop_back.c mx_list_size.c mx_sort_list.c mx_clear_list.c mx_is_odd.c mx_isalpha.c mx_isdigit.c mx_islower.c mx_isupper.c mx_tolower.c mx_toupper.c mx_multiple_number.c mx_max.c mx_mid.c mx_is_prime.c mx_atoi.c mx_get_address.c

SRCS = $(addprefix $(SRCD)/, $(SRC))
OBJS = $(addprefix $(OBJD)/, $(SRC:%.c=%.o))
all: install

install: $(NAME)
$(NAME): $(OBJS)
	@ar rcs $@ $^
	@printf "\r\33[2K$@\t	\033[32;1mcreated\033[0m\n"

$(OBJD)/%.o: $(SRCD)/%.c $(INCS)
	@$(COMP) $(CFLG) -c $< -o $@ -I$(INCD)
	@printf "\r\33[2K$(NAME)\t   \033[33;1mcompile \033[0m$(<:$(SRCD)/%.c=%) "

$(OBJS): | $(OBJD)
$(OBJD):
	@mkdir -p $@

clean:
	@rm -rf $(OBJD)
	@printf "$(OBJD)\t 	\033[31;1mdeleted\033[0m\n"
uninstall: clean
	@rm -rf $(NAME)
	@printf "$(NAME)\t \033[031;1muninstalled\033[0m\n"
reinstall: uninstall install

start:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic main.c libmx.a && ./a.out
