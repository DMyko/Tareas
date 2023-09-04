#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


void invertirOrden(int v[], int tam) {
    for (int i = 0; i < tam / 2; ++i) {
        int aux = v[i];
        v[i] = v[tam - 1 - i];
        v[tam - 1 - i] = aux;
    }
}


void llenarMatriz(int matriz[][50], int filas, int columnas) {
    for (int fila = 0; fila < filas; ++fila) {
        for (int col = 0; col < columnas; ++col) {
            matriz[fila][col] = rand() % 1000 + 1; 
        }
    }
}


int main() {

    const int filas = 2; 
    const int columnas = 50; 
    int matriz[filas][columnas]; 


    srand(time(NULL));

    llenarMatriz(matriz, filas, columnas);

    printf("Matriz original:\n");

    for (int fila = 0; fila < filas; ++fila) {
        for (int col = 0; col < columnas; ++col) {
            printf("%d ", matriz[fila][col]);
        }
        printf("\n"); 
    }
    
    for (int fila = 0; fila < filas; ++fila) {
        invertirOrden(matriz[fila], columnas);
    }

    printf("\nMatriz invertida:\n");

    for (int fila = 0; fila < filas; ++fila) {
        for (int col = 0; col < columnas; ++col) {
            printf("%d ", matriz[fila][col]);
        }
        printf("\n"); 
    }

    return 0; 

}