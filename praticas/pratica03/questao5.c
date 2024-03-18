#include <stdio.h>
int main(){
long int gigabytes = 0;
  long int bytes = 0;

  printf("Entre com o valor de gigabytes:");
  int deu_certo = scanf(" %li", &gigabytes);

   bytes = gigabytes * 1024 * 1024 * 1024;
  printf("O valor de bytes eh %li\n",bytes);

  
  return 0;
}

