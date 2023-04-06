#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 9) {
    perror("Argumentos Insuficientes");
    exit(1);
  }

  int ban_i, ban_t, ban_o, ban_h, cont = 0; // Guardar su posicion
  for (int i = 1; i < argc; i += 2) {       // Validar banderas
    if (strcmp(argv[i], "-i") == 0) {
      ban_i = i;
      cont++;
    } else if (strcmp(argv[i], "-t") == 0) {
      ban_t = i;
      cont++;
    } else if (strcmp(argv[i], "-o") == 0) {
      ban_o = i;
      cont++;
    } else if (strcmp(argv[i], "-h") == 0) {
      ban_h = i;
      cont++;
    }
  }
  
  // Validar Utilizacion Banderas
  if(cont!=4){
    printf("Las banderas utilizadas son incorrectas, deben ser las siguientes: -i, -t, -o, -h\n");
    exit(1);
  }

  //Validar que el numero de hilos sea mayor a 0
  if (atoi(argv[ban_h+1]) < 1){
    printf("El numero de hilos debe ser mayor a 0.\n");
    exit(1);
  }

  //Validar Utilizacion Opcion
  if (atoi(argv[ban_o+1]) >= 4 || atoi(argv[ban_o+1]) <= 0){
    printf("La opcion escogida es erronea, esta debe ser un numero del 1 al 3\n");
    exit(1);
  }

  //Validar imagenOut (Validar si es extension.bpm)

}