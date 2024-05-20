#include <stdio.h>
#include <string.h>

int main(){
char nome[20];  // na última posição sempre será o \0

  printf("Entre com o seu nome: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Olá %s!\n", nome);

 char mensagem[30];
 strcpy(mensagem, "Olá!");
  printf("%s\n", mensagem);
  strcat(mensagem, "Mundo!");
  printf("%s\n", mensagem);
  int tamanho = strlen(mensagem);
  printf("O tamanho da string é  %i\n", tamanho);
  printf("As strings nome e mensagem são iguais? %i\n", strcmp(nome, mensagem));
  
   return 0;
}