#include <stdio.h>
#define valor 100

/*
USO DOS PONTEIROS:
    1- PASSAGEM DE PARAMETROS POR REFERENCIA
    2- ALOCACAO DINAMICA
       EX= A ALOCACAO E FEITA COM A FUNCAO -MALLOC- QUE SIGNIFICA
       MEMORY ALLOCATION E USA-SE O -FREE- PARA LIBERAR A MEMORIA
       PONTEIROS E VETORES
OPERACAO COM PONTEIROS:
    1- COMPARACAO:
        == -> Igual
        != -> Diferente
        NULL -> Nulo, Indica ponteiro vazio.
        NAO EXISTEM OPERACOES COM DOIS PONTEIROS.
        A SOMA DE UM PONTEIRO COM UMA CONSTANTE INTEIRA EH VALIDA...
        ...E FAZ COM QUE SEU ENDERECO SEJA COLOCADO O NUMERO DE POSICOES...
        ... A FRENTE IGUAL O VALOR DA CONSTANTE * TAMANHO DO TIPO. 
        
        VETORES E PONTEIROS SAO TRATADOS DA MESMA FORMA.
        VETOR NAO PODE TER SEU ENDERECO ALTERADO.
*/


        
main(){
       //UTILIZANDO O MALLOC
       int n, i;
       float * notas;
       /*
       poderiamos usar o vetor tambem como ponteiro
       exemplo:
               float v[10];
               *(v+1)=0;
               estamos atribuindo o valor 0 para o vetor na posicao 1;
       */
       printf("Digite a quantidade de notas: ");
       scanf("%d", &n);
       notas = (float *) malloc( n *sizeof(float)); 
       
       printf("Digite as %d notas: \n", n);
       for (i =0; i < n; i++){
           scanf("%f", notas + i);
       }
       
       for ( i =0; i < n; i++){
           printf("%f\n", *(notas + i) ); // notas eh equivalente ao fazer isso notas[i]
       // ou printf("%f\n", notas[i] );
       }
       
       // uso as notas
       free(notas);
       system("pause");
       
}
