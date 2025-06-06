cmake_minimum_required(VERSION 3.10) #estable la version minima requerida de CMake para evitar errores

project(InfoPersonalJSON C) #define el nombre del proyecto y se especifica el lenguaje de programación

set(CMAKE_C_STANDARD 11) #configura el estándar de c a utilizar 

set(CMAKE_C_FLAGS "-Wall -Wextra") #flags de compilación 

add_executable(info_personal  #define el nombre del ejecutable 
    #archivos fuente 
    src/main.c 
    src/json.c
)

find_package(cJSON REQUIRED) #busca la biblioteca cJSON en el sistema y la marca como requerida, si no la encuentra falla

target_link_libraries(info_personal PRIVATE cjson) #enlaza la biblioteca con el ejecutable 
#PRIVATE indica que solo el ejecutable usa la biblioteca cJSON