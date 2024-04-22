#include <stdio.h>

int main() {
  int nota1;
  int nota2;

  printf("Entre com a primeira nota:");
  int deu_certo = scanf("%i", &nota1);

  if (nota1 >= 0.0f && nota1 <= 10.0f && deu_certo) {
    printf("Entre com a segunda nota:");
    deu_certo = scanf("%i", &nota2);

    if (nota2 >= 0.0f && nota2 <= 10.0f && deu_certo) {
      float media = 0.4f * nota1 + 0.6f * nota2;
      printf("A media eh %.1f\n", media);

      if (media >= 9.0f && media <= 10.0f) {
        printf("A mencao eh ss\n");
      } else if (media >= 7.0f && media <= 8.9f)

      {
        printf("A mencao eh ms\n");
      } else if (media >= 5.0f && media <= 6.9f) {
        printf("A mencao eh mm\n");
      } else if (media >= 3.0f && media <= 4.9f) {

        printf("A mencao eh mi\n");
      } else if (media >= 0.1f && media <= 2.9f) {
        printf("A mencao eh ii\n");
      } else if (media == 0.0f) {
        printf("A mencao eh sr\n");
      }

      else {
        printf("A primeira nota é inválida!\n");
      }
    }
  }
  return 0;
}