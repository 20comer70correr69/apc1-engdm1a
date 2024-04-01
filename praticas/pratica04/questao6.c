#include <stdio.h>
#include <math.h>

int main(){
  int a;
  int b;
  int c;

  printf("Entre com o valor de a:");
  int deu_certo = scanf("%i", &a);

  printf("Entre com o valor de b:");
   deu_certo = scanf("%i", &b);

  printf("Entre com o valor de c:");
   deu_certo = scanf("%i", &c);

  int delta = b * b - 4 * a * c;
  double raiz1 = (-b + sqrt(delta)) / 2 * a;
  printf("A raiz quadrada no numero1 eh %.2f\n", raiz1);

  double raiz2 = (-b - sqrt(delta)) / 2 * a;
  printf("A raiz quadrada no numero1 eh %.2f\n", raiz2);

  
  return 0; 
}