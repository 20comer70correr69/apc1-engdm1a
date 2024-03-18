#include <stdio.h>
int main(){
float pi = 3.14;
float r = 0.0;

  printf("Entre com o valor do raio:");
  int deu_certo = scanf("%f", &r);

  float perimetro_pizza = 2 * pi * r;
  printf("O perimetro da pizza eh %f\n", perimetro_pizza);
  
  return 0;
}