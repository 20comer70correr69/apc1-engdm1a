#include <stdio.h>

int main(){
   int numero1;
   int numero2;

  printf("Entre com o primeiro numero:");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero");
   deu_certo = scanf("%i", &numero2);

  int sao_iguais = numero1 = numero2;
  printf("Os numeros 1 e 2 são iguais? &i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2;
  printf("OS nunmeros são diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2;
  printf("O cprimeiro número é maior? %i\n", eh_maior);

  int eh_menor = numero1< numero2;
  printf("O numero 1 é menor que o numero 2? %i\n", eh_menor);

  int eh_maior_ou_igual = numero1 >= numero2;
  printf("O numero 1 é maior ou igual ao numero 2? %i\n", eh_maior_ou_igual);

  int eh_menor_ou_igual = numero1 <= numero2;
  printf("O numero 1 é menor ou igual ao numero 2? %i\n", eh_menor_ou_igual);
  
    
  
  return 0;
    }