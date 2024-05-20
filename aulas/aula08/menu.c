#include <stdio.h>
#include <stdlib.h>

int main() {
  char opcao;
  while (opcao != 0) {
    int deu_certo = system("clear");
    printf("Meu jogo\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Entre com uma opção =>");
    deu_certo = scanf("%c", &opcao);
    while (getchar() != '\n')
      ; // limpa o buffer

    switch (opcao) {
    case '1': {
      break;
    }
    case '2': {
      break;
    }
    case '3': {
      break;
    }
    case '4': {
      break;
    }
    case '0':
      printf("Até logo!\n");
      break;
    default:
      printf("Opção inválida!\n");
    }
    return 0;
  }