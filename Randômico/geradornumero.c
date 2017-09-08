#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//inicializa o gerador de numeros aleatorios utilizando a funcao time
//para pegar o tempo da maquina (dado em segundos a partir de 1 de Janeiro de 1970)
//e usa este valor como semente de inicializacao.
//mostra comentado ainda outras formas de inicializacao. A primeira delas tem o mesmo
//efeito da que nao esta comentada, a diferenca e que o valor do tempo em segundos
//fica armazenado na variavel t e pode ser usada em outro local do programa se necessario.
//a segunda forma comentada utiliza um valor constante e sempre inicializa o gerador da mesma
//forma, repetindo os valores gerados.
//A funcao e do tipo VOID, isto e, nao retorna valor algum.
void inicializaObterNumero(){
	//time_t t;
	//srand(time(&t));
    srand(time(NULL));
    //srand(12345);
}

//a funcao rand gera um numero aleatorio inteiro entre 0 e RAND_MAX (depende do compilador e da maquina)
//a funcao obterNumero modifica a rand para gerar um valor entre 0 e 1, para isso faz a divisão real
//1.0/RAND_MAX e multiplica pelo valor gerado.
//A funcao é do tipo double, retornando um double para a chamada.
double obterNumero(){
   int temp;
   temp=rand();
   return temp*1.0/RAND_MAX;
}


int main(){
    inicializaObterNumero();//inicializa o gerador de numeros aleatorios, isto deve ser feito apenas uma vez em um código.
    for(int i;i<10;i++){
       printf("%f \n", 10*obterNumero());//gera 10 valores aleatórios, o produto do resultado de obterNumero por 10
                                         //faz com que os valores gerados sejam entre 0 e 10.
    }
    return 1;
}
