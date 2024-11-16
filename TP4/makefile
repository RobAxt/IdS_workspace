TARGET = app.elf

SRC_DIR = ./src
INC_DIR = ./inc
OUT_DIR = ./build
OBJ_DIR = $(OUT_DIR)/obj
DEFINES = MAX_GPIO_INSTANCES=7

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

.DEFAULT_GOAL := all

-include $(patsubst %.o,%.d,$(OBJ_FILES))

all: $(OBJ_FILES)
	@echo Enlazando $@
	@gcc $(OBJ_FILES) -o $(OUT_DIR)/$(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo Compilando $<
	@mkdir -p $(OBJ_DIR)
	@gcc -o $@ -c $< -I$(INC_DIR) -MMD -D$(DEFINES)

clean:
	@rm -r $(OUT_DIR)

run: $(OUT_DIR)/$(TARGET)
	@echo Ejecutando $<
	@./$(OUT_DIR)/$(TARGET)

doc:
	@mkdir -p $(OUT_DIR)/doc
	@doxygen doxyfile
