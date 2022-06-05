//Faça uma função

//int contaCaracteresArquivo(FILE* arq)

//que recebe um ponteiro de arquivo previamente aberto na parte principal do programa e retorna a quantidade de caracteres presentes nesse arquivo, sem contar o finalizador EOF, nem o caractere de quebra de linha ('\n'), e nem espaços em branco. Veja os exemplos abaixo. 

#include <stdio.h>

int contaCaracteresArquivo(FILE *arq){
  int qtd = 0;
  char c = fgetc(arq);

  while ((c != EOF)){
    if((c != EOF) && (c != ' ') && (c != '\n')){	  
      qtd++;
    }
    c = fgetc(arq);
  }
  return qtd;
}


int main(){
  FILE* fp = fopen("teste.txt","w+");
  char *s = "     er 123";
  fputs(s,fp);
  rewind(fp);
  printf("%d\n",contaCaracteresArquivo(fp));
  fclose(fp);
  return 0;
}
