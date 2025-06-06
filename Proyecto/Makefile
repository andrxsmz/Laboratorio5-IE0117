#define el compilador 
CC = gcc
#enlaza la biblioteca cjson
LDFLAGS = -lcjson

#incluye el direcotio de los archivos fuente al compilar
CFLAGS = -I$(SRC_DIR)

#directorio de los archivos fuente
SRC_DIR = src

#directorio de salida
BUILD_DIR = build

#lista todos los archivos .c dentro del directorio src
SOURCES = $(wildcard $(SRC_DIR)/*.c)

#genera los archivos .o correspondientes a los .c
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SOURCES))

#ejecutable final
TARGET = $(BUILD_DIR)/info_personal 

#regla por defecto
all: $(TARGET)

#crea el directorio de salida si no existe
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# compila cada archivo fuente .c en su respectivo archvo .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

#genera el ejecutable a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

#limpiar los archivos resultantes
clean:
	rm -f $(TARGET)
	rm -rf $(BUILD_DIR)
	rm -f data.json

