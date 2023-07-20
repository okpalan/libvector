# Makefile

# Compiler
CC := gcc

# Directories
SRC_DIR := src
OBJ_DIR := obj
INCLUDE_DIR := include
LIB_DIR := lib

# Source files
SRC := $(wildcard $(SRC_DIR)/*.c)
OBJ := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

# Compiler flags
CFLAGS := -I$(INCLUDE_DIR)

# Targets
LIB_NAME := libvector.a
LIB_TARGET := $(LIB_DIR)/$(LIB_NAME)

# Default rule
all: $(LIB_TARGET)

# Rule to compile object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) -c $< -o $@ $(CFLAGS)

# Rule to build the library
$(LIB_TARGET): $(OBJ)
	@mkdir -p $(LIB_DIR)
	ar rcs $(LIB_TARGET) $(OBJ)

# Clean rule
clean:
	rm -rf $(OBJ_DIR) $(LIB_DIR)
