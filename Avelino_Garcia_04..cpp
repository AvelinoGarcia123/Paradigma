#include <stdio.h>
int main() {
    int M[6][7] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 10,15, 22,
             	11, 12, 13, 14, 15, 16, 17, 18, 19, 22,87,89,87,65,
             	21, 22, 23, 24, 25, 26, 27, 28, 29, 34,13,16,76,86,74,37};
    int traspuesta[7][6];
    int i, j;
	
	printf("Matriz original (6x7):\n");
     for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
           printf("%d ",  M[i][j]);
        }
        printf("\n");
    }
	 
	
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            traspuesta[j][i] = M[i][j];
        }
    }
	
	printf("\n\n");

    printf("Matriz Traspuesta (7x6):\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d ", traspuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
