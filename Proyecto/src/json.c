#include <stdio.h>
#include "json.h"
#include <cjson/cJSON.h>

void crear_archivo_json() {
    cJSON *json = cJSON_CreateObject(); //crea un objeto vacío
    //se le añade cada campo con la informacion al objeto vacío
    cJSON_AddStringToObject(json, "Nombre", "Michael Andrés Martínez Aguilar");
    cJSON_AddNumberToObject(json, "Edad", 20);
    cJSON_AddStringToObject(json, "email", "michael06amartinez@gmail.com");
    cJSON_AddStringToObject(json, "Carnet", "C34587");
    cJSON_AddBoolToObject(json, "Estudiante activo", 1);  

   char *json_str = cJSON_Print(json); //convierte el objeto en una cade de texto 
    //crear el archivo .json y escribir la informacion 
   FILE *fp = fopen("data.json", "w");
   if (fp == NULL) {
       printf("Error: Unable to open the file.\n");
       return;
   }
   printf("%s\n", json_str);
   fputs(json_str, fp);
   fclose(fp);

   cJSON_free(json_str); //liberar la memoria del string
   cJSON_Delete(json); //elimina el objeto creado y libera esa memoria

}
