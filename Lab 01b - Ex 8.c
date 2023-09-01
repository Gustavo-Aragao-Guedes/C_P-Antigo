// Crie uma função capaz de criar a transposta de uma matriz

#include <stdio.h>
#include <stdlib.h>

void transposta(int matriz[][5]) {
    for (int i = 1; i < 5; i++) { 
        for (int j = 0; j < i; j++) { 
            int aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = aux;
        }
    }
}

int main(void) {
    int matriz[5][5];
    for (int i = 0, c = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++, c++) {
            matriz[i][j] = c;
        }
    }

    printf("original:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("| %2d ", matriz[i][j]);
        }
        printf("|\n");
    }

    transposta(matriz);
    printf("transposta:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("| %2d ", matriz[i][j]);
        }
        printf("|\n");
    }
}
