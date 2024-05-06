#include <stdio.h>
int main(){
long int numero;
long int fatorial = 1;
  
  printf("Entre com um número >= 0:");
  int leu_certo = scanf("%li", &numero);

  if(leu_certo && numero >= 0){
    for(int i = numero; i > 1; i--){
      fatorial = fatorial * i;
    }
    printf("O fatorial de %li = %li\n", numero, fatorial);
  }else{
    printf("Número inválido. Tente novamente\n");
  }
  
  
  return 0;
}