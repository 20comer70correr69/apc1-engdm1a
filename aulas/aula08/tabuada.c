#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um número de 1 a 10");
  int leu_certo = scanf("%i", &numero);

if(leu_certo && numero >0 && numero <11){
  printf("A tabuada de %i\n", numero);
  
  for (int i = 1; i <= 10; i++) {
    printf("%i x %i = %i\n", i, numero, i * numero);

    printf("A tabuada invertida de %i\n", numero);
    for (int i = 10; i > 0; i--){
      printf("%i x %i = %i\n", i, numero, i * numero);
    }
  }
}else {
  printf("Numero inválido. Tente novamente\n");
}

return 0;
}