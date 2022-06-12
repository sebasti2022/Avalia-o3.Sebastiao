#include "MinhaBiblioteca.h"
#include <stdio.h>

int  main ( void )
{
    // declaração de variáveis
    int contador;
    tMensagem msg;

    // chamada da função que lê os inputs do usuário
    lerMsg (&msg);
 
    // chamada da função que troca os caracteres e retorna o contador
    contador = trocarChar (&msg);
 
    // impressão do resultado
    printf ( " \n %s \n %s \n %d \n " , msg.mensagem_antes , msg.mensagem_depois , contador);

    return 0;
}