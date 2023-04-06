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
  // Validar
  if(cont!=4){
    printf("Las banderas utilizadas son incorrectas, deben ser las siguientes: -i, -t, -o, -h\n");
  }
}