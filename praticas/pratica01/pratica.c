/*
2. faça um programa em C que calcue a área de um triângulo(a= base x altura/2). Considere base e altura números inteiros maior que 0.
 */

#include <stdio.h>

int main(){
  float base;
  float altura;

  base = 2.0f;  // 2.0f eh float, 2.0 eh double
  altura = 3.0f;

  printf("Entre com o valor da base: ");
  int deu_certo =  scanf("%f", &base);

  printf("Entre com o valor da altura:");
   deu_certo = scanf("%f", &altura);

  float area = base * altura / 2; 

  printf("A area do triangulo eh %f\n", area);

  return 0;
}