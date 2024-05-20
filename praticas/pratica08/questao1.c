#include <stdio.h>

#define LIMETE 10

int main(){
 int numeros[LIMETE];

  for(int i=0; i<LIMETE; i++){
  printf("Entre com o %io número: ", i + 1);
    int deu_certo = scanf("%i", &numeros[i]);
  }
    
  int numero;
  printf("Entre com o número a ser procurado: ");
  int deu_certo = scanf("%i", &numero);
  int achei = -1;
   
for(int i=0; i<LIMETE; i++){
  if(numero == numeros[i]){
    achei = i;
    break;
  }
}

  if(achei < 0){
    printf("Número %i não foi encontrado!\n", numero);
  }else{
    printf("Achei o número %i na posição %i\n", numero, achei);
  }

  
  return 0;
}