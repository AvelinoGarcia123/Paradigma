#include <stdio.h>

int main() {
  int temperaturas[100];
  int i, sum = 0;
  float media;
  int countador = 0;

  
  for (i = 0; i < 100; i++) {
    printf("Introduce la temperatura %d: ", i + 1);
    scanf("%d", &temperaturas[i]);
    sum = sum + temperaturas[i];
  }


  media = (float)sum / 100;


  for (i = 0; i < 100; i++) {
    if (temperaturas[i] >= media) {
      countador++;
    }
  }

  printf("La media aritmética es: %.2f\n", media);
  printf("El número de temperaturas mayores e iguales que la media es: %d\n", count);

  return 0;
}
