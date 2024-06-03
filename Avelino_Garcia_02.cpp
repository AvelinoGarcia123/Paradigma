#include <stdio.h>

int main() {
    int L[50] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100,15, 22,
             	110, 120, 130, 140, 150, 160, 170, 180, 190, 200,
             	210, 220, 230, 240, 250, 260, 270, 280, 290, 300,
				 13,16,76,86,74,37,29,19,48,93,10,12,645,78 };
    int suma = 0;
    int i;


    for (i = 0; i < 50; i++) {
        suma = suma + L[i];
    }

    printf("La suma de los miembros de la lista es: %d\n", suma);

    return 0;
}
