project('InfoPersonalJSON', 'c', #define el proyecto y especifica el lenguaje
  default_options : [
    'warning_level=3',  # Habilita  los warnings
    'c_std=c11'        # Usa el estándar C11
  ]
)

cjson_dep = dependency('libcjson') #Busca la dependencia de la biblioteca cJSON

# Archivos fuente
src_files = files(
  'src/main.c',
  'src/json.c'
)

# Configura el ejecutable final
executable('info_personal', 
  sources : src_files,
  dependencies : [cjson_dep],
  install : false  # No instalar en el sistema
)