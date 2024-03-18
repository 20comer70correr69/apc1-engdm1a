#include <stdio.h>

int main(){
  float A1 = 0.0;
  float A2 = 0.0;
  
  printf("Entre com o valor do A1:");
  int deu_certo = scanf("%f",&A1);

  printf("Entre com o valor do A2:");
  deu_certo = scanf("%f",&A2);

  float media = (0.4 * A1) + (0.6 * A2);
  printf("A media eh %f\n", media);
  

return 0;
}