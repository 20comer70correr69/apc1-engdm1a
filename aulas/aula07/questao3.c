#include <stdio.h>

int main(){
int nota;

  printf("Entre com uma nota de 1 a 5");
  int leu_certo = scanf("%i", &nota);

  switch(nota){
    case 1: printf("Ruim\n");break;
    case 2:  printf("Insuficiente\n");break;
    case 3: printf("Suficiente\n");break;
    case 4: printf("Bom\n");break;
    case 5: printf("Ótimo\n");break;
    default: printf("Nota inválida\n");break;
  }

  return 0;
}