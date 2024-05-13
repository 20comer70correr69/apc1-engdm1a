#include <stdio.h>

int main(){
 int numero;
 int maior = 0;
 int menor = 0;
  int numero_eh_valido = 0;

  while(!numero_eh_valido){ // numero_eh_valido == 0
    printf("Entre com um número(0 vai parar):");
    int leu_certo = scanf("%i", &numero);
    getchar(); // limpar o \n
    numero_eh_valido = leu_certo && numero == 0;

    if(numero == 0){
      break;
    }
    
    if(maior == 0){
      maior = numero;
    }

    if(menor == 0){
      menor = numero;
    }
    
    if(maior < numero){
      maior = numero;
    }

    if(menor > numero){
      menor = numero;
    }
  }

  printf("O maior número é %i e o menor é %i\n", maior, menor);
   
  return 0;
}