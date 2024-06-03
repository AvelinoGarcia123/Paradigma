#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, sumFila, sumCol, sumDiag1, sumDiag2;

    
    printf("Introduce los valores de la matriz de 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    
    sumFila = matriz[0][0] + matriz[0][1] + matriz[0][2];


    for (i = 1; i < 3; i++) {
        if (matriz[i][0] + matriz[i][1] + matriz[i][2] != sumFila) {
            printf("No es un cuadrado mágico\n");
            return 0;
        }
    }


    for (j = 0; j < 3; j++) {
        if (matriz[0][j] + matriz[1][j] + matriz[2][j] != sumFila) {
            printf("No es un cuadrado mágico\n");
            return 0;
        }
    }


    sumDiag1 = matriz[0][0] + matriz[1][1] + matriz[2][2];

    
    sumDiag2 = matriz[0][2] + matriz[1][1] + matriz[2][0];

    
    if (sumDiag1 != sumFila || sumDiag2 != sumFila) {
        printf("No es un cuadrado mágico\n");
        return 0;
    }

    printf("Es un cuadrado mágico\n");

    return 0;
}
