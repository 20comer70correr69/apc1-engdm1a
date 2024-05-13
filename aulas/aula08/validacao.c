#include <stdio.h>
int main() {
  int numero;
  int numero_eh_valido = 0;

  while (numero_eh_valido == 0) {
  printf("Entre com um número entre 1 e 10 :");
  int leu_certo = scanf("%i", &numero);

  numero_eh_valido = leu_certo && numero >= 1 && numero <= 10;

  if (numero_eh_valido == 0) {
    printf("Algo deu errado\n");
    getchar();
  }
}
printf("Faz certo que dá certo!\n");

return 0;
}