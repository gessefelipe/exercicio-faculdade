#include <stdio.h>

int main(){
  FILE *pae, *pas;//ponteiros para arquivos
  int valor;//variavel para leitura de dados do arquivo
  char *modo = "r";//modo de leitura "read"
  char arquivoSaida[] = "arquivo.txt";//nome do arquivo a ser utilizado

  pae = fopen("arquivo.txt", modo);//abrindo arquivo para leitura.

  if (pae == NULL) {//teste para verificar se conseguiu abrir o arquivo
     fprintf(stderr, "Nao pode abrir o arquivo arquivo.txt!\n");
     return 1;
  }

  for(int i=0; i< 10; i++){
    fscanf(pae,"%d\n", &valor);
    printf("%d\n", valor);
  }
  fclose(pae);//fecha o arquivo
  
  pas = fopen(arquivoSaida, "a");//abre o arquivo para incluir novos elementos

  if (pas == NULL) {
     fprintf(stderr, "Nao pode abrir o arquivo de saida %s!\n",arquivoSaida);
     return 1;
  }
  fprintf(pas,"%d\n",60);
}
