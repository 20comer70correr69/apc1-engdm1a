#include <stdio.h>
int main(){

  int  numero;
printf("Entre com um número entre 1 e 100:");
  int leu_certo = scanf("%i", &numero);
    
  if(leu_certo && numero > 0 && numero < 101){
     // for (int i = 1; i <101; i++){
      // if (i % numero == 0){
        // printf("%i, ", i);
       //} 
      //}
    for (int i = numero; i < 101; i = i + numero){
      printf("%i, ", i);
    }
    printf("\n");
  } else {
    printf("Número inválido. Tente novamente\n");
  }
  
return 0;  
}