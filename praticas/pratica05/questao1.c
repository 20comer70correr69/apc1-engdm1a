#include<stdio.h>
int main(){
int numero;

  printf("Entre com um número inteiro");
  int deu_certo = scanf("%i", &numero);

  if(numero % 2 == 0){
    printf("O número %i eh par!\n", numero);
  } else{
    printf("O numero %i eh impar!\n", numero);
  }
  
  return 0;
}