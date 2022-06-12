# include "MinhaBiblioteca.h"
# include"stdio.h"
# include "string.h"

// função lê os inputs do usuário e retorna um ponteiro para uma estrutura que contém as informações lidas
// também é utilizado o strncpy para copiar a mensagem de entrada e gravar para ser utilizado na main
int  lerMsg (tMensagem *tp)
{    
    printf ( " Digite a mensagem, char inicial e char final: \n " );
    scanf ( " %s  %c  %c " , tp-> mensagem_depois , &tp-> inicial , &tp-> final );

    strncpy (tp-> mensagem_antes , tp-> mensagem_depois , MAX_SIZE);

    return  0 ;
}

// principal função que faz a operação de troca de caracteres usando o ponteiro da estrutura
// e um loop para percorrer a mensagem para identificar o caracter inicial e final e realizar a troca
// incluído um contador no loop para contar quantas trocas foram feitas
int  trocaChar (tMensagem *tp)
{
    int cont = 0 ;

    for ( int i = 0 ; tp-> mensagem_depois [i]; ++i)
    {
        if (tp-> mensagem_depois [i] == tp-> inicial )
        {
            tp-> mensagem_depois [i] = tp-> final ;
            cont++;
        }
    }
    return (cont);
}