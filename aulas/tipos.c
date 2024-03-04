#include <stdio.h>

int main(){
char caracter; // caracteres '' 1 byte
int inteiro;   // numeros inteiros +/- 4 bytes
float decimal6;  // numero decimal com 6casas
double decimal15; // numero decimal com 15casas
void sem_valor; // vazio
// nao tem string, mas aceita "uma frase"

  signed char caracterer_com_sinal; // 1 byte -128 a 127
  unsigned char caractere_sem_sinal; // 1 byte 0 a 255

  signed int inteiro_com_sinal; // 4 bytes -21bi a +21bi
  unsigned int inteiro_sem_sinal; // 4 bytes 0 a +42 bi

  short int inteiro_curto;  // 2 bytes -32mil a +32mil
  long int inteiro_longo;  // 8 bytes -9hexa  +9hexa

  long double duplo_longo; // 16 bytes -1.2E+4932 a +1.2E+4932 (18casas)

  signed short int inteiro_curto_com_sinal; // 2 bytes -32mil a +32mil
  unsigned short int inteiro_curto_sem_sinal; // 2 bytes 0 a 65mil
  signed long int inteiro_longo_com_sinal; // 8 bytes -9hexa a +9hexa
  unsigned long int inteiro+longo_sem_sinal; // 8 bytes 0 a +15 hexa
  
  return 0;
}