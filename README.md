# **Procesamiento Concurrente Imágenes**
Lectura, escritura y tratamiento de imágenes BMP. El código sirve para el procesamiento de una imagen en formato BMP para aplicarle filtros de forma concurrente por medio de la utilización de hilos.

## Compilación
```bash
$ gcc imgconc.c -o imgconc
```

## Ejecución 
```bash
$ './imgconc –i imagenIn –t imagenOut –o opción –h nhilos'
```

**Explicación flags:**
- -i (imagenIn): Nombre del archivo BPM para aplicarle filtros.
- -t (imagenOut): Nombre del archivo BPM para guardar la imagen con el filtro aplicado.
- -o (Opción): Número con el filtro a utilizar.
- -h (nhilos): Número de hilos a utilizar en el procesamiento.
