## Juego RICDEE

### Instrucciones de compilación

- Requisitos:

    - [CMake](https://cmake.org/download)
  
    - Compilador de C++
      - [En windows usa Visual Studio 2022](https://visualstudio.microsoft.com/es/downloads/), en linux utiliza GCC y Ninja

  	En windows se puede instalar en cmd usando el siguiente comando: `winget install --id Kitware.CMake`

	En linux, instálalo con el gestor de paquetes que tengas, por ejemplo en Alpine Linux: `apk add cmake`

	Las dependencias del programa se instalarán automáticamente con CMake.

- Compilación:

	Los comandos que se requieren son los siguientes:

	```bash
	# Configuración y descarga de dependencias, si usas Ninja, usa -G "Ninja" y no -G "Visual Studio 17 2022"
	cmake -B build -S . -G "Visual Studio 17 2022"

	cmake --build build --parallel 4
	```

- Ejecución

	Busca el ejecutable dentro de la carpeta `build`, se debe llamar `JuegoRicdee`