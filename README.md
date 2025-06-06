## Intalación de la biblioteca cJSON
    Ejecutando el siguiente comando en la terminal instalará la biblioteca cjSON:
```bash
sudo apt install libcjson-dev
```

## Compilación con Makefile
Primero se ejecuta el comando make para compilar y generar el ejecutable en build. Luego para ejcutar el programa ./info_personal. Y por ultimo para eliminar los archivos creados se ejecuta make clean:

```bash
make
./build/info_personal
make clean
```

## Compilación con CMake 
Primero se crea el directorio build y se mueve a ese directorio, usando el comando mkdir build && cd build. Luego se configura el proyecto con el comando cmake .. .Para compilar el proyecto usamos el comando make y por último ejecutamos el proyecto con ./info_personal:

```bash
mkdir build && cd build
cmake ..
make
./info_personal
```

## COmpilación con Meson
Primero se confugura el proyecto con el comando meson setup build. Luego para moverse al directorio build se utiliza cd build y se compila el proyecto utilizando el comando ninja. Por ultimo se ejecuta con ./info_personal:

```bash
meson setup build
cd build
ninja
./info_personal

```
