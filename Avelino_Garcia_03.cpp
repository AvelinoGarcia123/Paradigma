#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }


    for (i = 0; i < 4; i++) {
        matriz[i][i] = 1;
    }


    printf("Matriz identidad de 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
