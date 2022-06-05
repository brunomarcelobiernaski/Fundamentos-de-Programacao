//Faça uma função

//int contaCaractereArquivo(FILE* arq, char ch)

//que recebe um ponteiro arq de arquivo previamente aberto na parte principal do programa, juntamente com um caractere ch, e retorna a quantidade de vezes que o caractere ch aparece no conteúdo do arquivo apontado por arq.

#include <stdio.h>

int contaCaractereArquivo(FILE *arq, char letra){
  int qtd = 0;
  char c = fgetc(arq);

  while(c != EOF){
    if(c == letra){
      qtd++;
    }
    c = fgetc(arq);
  }

  return qtd;
}

int main(){
  FILE* fp = fopen("teste.txt","w+");
  char *s = "teste";
  fputs(s,fp);
  rewind(fp);
  printf("%d\n",contaCaractereArquivo(fp,'e'));
  fclose(fp);
  return 0;
}
