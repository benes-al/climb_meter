# **************************************************************************** #
#                               MAKEFILE CONFIG                                #
# **************************************************************************** #

NAME        = climb_meter

# Compiler and flags
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -Iincludes

# Source folders
SRC_DIR     = src
PARS_DIR	= $(SRC_DIR)/parser
PROG_DIR	= $(SRC_DIR)/program
TABL_DIR	= $(SRC_DIR)/tables
MAIN_DIR	= $(SRC_DIR)

# Source files
SRC_FILES = \
	$(PARS_DIR)/get_climber_attributes.c \
	$(PARS_DIR)/get_general_info.c \
	$(PARS_DIR)/parse_age.c \
	$(PARS_DIR)/parse_arm_span.c \
	$(PARS_DIR)/parse_finger_strength.c \
	$(PARS_DIR)/parse_height.c \
	$(PARS_DIR)/parse_name.c \
	$(PROG_DIR)/evaluate_climber.c \
	$(TABL_DIR)/print_ape_index.c \
	$(TABL_DIR)/print_climbing_potential.c \
	$(TABL_DIR)/print_evaluation_result.c \
	$(TABL_DIR)/print_finger_strenght.c \
	$(TABL_DIR)/print_main_menu.c \
	$(MAIN_DIR)/main.c \

# Object files
OBJ_FILES   = $(SRC_FILES:.c=.o)

# **************************************************************************** #
#                                MAKE RULES                                    #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re