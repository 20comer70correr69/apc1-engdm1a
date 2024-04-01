#include <stdio.h>
#include <math.h>

int main(){
  int angulo;
  int distancia;
  const double PI = 3.14;

  printf("Entre com o valor do angulo:");
  int deu_certo = scanf("%i", &angulo);

  printf("Entre com o valor da distancia:");
   deu_certo = scanf("%i", &distancia);
  
  double seno = sin( angulo * (PI / 180));
  printf("O seno do angulo eh %.2f\n", seno);

  double altura = seno * distancia;
   printf("A altura  eh %.2f\n", altura);
  
  return 0;
}