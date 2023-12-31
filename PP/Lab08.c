/*1 Determine o valor especificado em cada item abaixo considerando que foi
executado as seguintes instruções (assuma que o endereço de x é 1000 e
de y é 1004):
 int x = 10, y=20;
 int* p1;
 int* p2;
 p1 = &x;
 p2 = &y;
 (p1)++;
 (a) x
 (b) y
 (c) &x
 (d) &y
 (e) p1
 (f) p2
 (g) *p1 + *p2
 (h) *(&x)
 (i) &(*p2)*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 10, y=20;
    int* p1;
    int* p2;

    p1 = &x;
    p2 = &y;
    (p1)++;

    printf("A: %d \n", x);
    printf("B: %d \n", y);
    printf("C: %p \n", &x);
    printf("D: %p \n", &y);
    printf("E: %d \n", p1);
    printf("F: %d \n", p2);
    printf("G: %d \n", *p1 + *p2);
    printf("H: %d \n", *(&x));
    printf("I: %p \n", &(*p2));
     
    return 0; 
}

------------------------------------------------------------------------------
/*2 Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use
&). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    float y; 
    char z; 

    //Declarando Ponteiros 
    int* p1; 
    float* p2;
    char* p3; 

    p1 = &x; 
    p2 = &y;
    p3 = &z; 
    
    //Lendo valores para variáveis 
    printf("Digite o valor inteiro: \n");
    scanf("%d", &x); 
    printf("Digite o valor real: \n");
    scanf("%f", &y);
    printf("Digite um char: \n");
    setbuf(stdin, NULL); 
    scanf("%c", &z);
    
    printf("\n");

    //Imrpimindo valores antigos das variáveis 
    printf("Valor antigo do inteiro: %d\n", x); 
    printf("Valor antigo do real: %.2f\n", y); 
    printf("Valor antigo char: %c\n", z); 
    
     printf("\n");
 
    //Lendo novos valores 
    printf("Digite um novo valor inteiro: \n"); 
    scanf("%d", p1);  
    printf("Digite um novo real: \n"); 
    scanf("%f", p2);
    printf("Digite um char: \n"); 
    setbuf(stdin, NULL); 
    scanf("%c", p3);
    
    printf("\n");
    
    //Imprimindo os novos valores
    printf("Novo valor inteiro: %d\n", x ); 
    printf("Novo valor real: %.2f\n", y ); 
    setbuf(stdin, NULL); 
    printf("Novo char: %c\n", z); 
    
    
    
    return 0;
}
------------------------------------------------------------------
/*3 Escreva um programa que contenha duas variáveis inteiras. Compare seus
endereços e exiba o maior endereço.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y;

    //Declarando Ponteiros 
    int* p1;
    int *p2; 

    p1 = &x; 
    p2 = &y; 

    if(p1>p2){
        printf("O endereco de x eh maior, sendo ele: %p \n", &x);
    } else if (p2<p1){
        printf("O endereco de y eh maior, sendo ele: %p \n", &y);
    }

    
    return 0;
}
-----------------------------------------------------------------
/*4 Escreva um programa que contenha duas variáveis inteiras. Leia essas
variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    //Declarando variáveis
    int x, y;

    //Lendo variáveis do teclado
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: "); 
    scanf("%d", &y); 

    //Declarando Ponteiros 
    int* p1;
    int *p2; 

    //Apontando os ponteiros para as variáveis declaradas 
    p1 = &x; 
    p2 = &y; 

    //Comparando o maior endereço de memória e imprimindo ele 
    if(p1>p2){
        printf("O endereco de %d eh maior, sendo ele: %p \n", x, &x);
    } else if (p2<p1){
        printf("O endereco de %d eh maior, sendo ele: %p \n", y, &y);
    }
 
    return 0;
}
-------------------------------------------------------------------------
/*5 Faça um programa que leia dois variáveis do tipo inteiro (A e B) e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve retornar a soma do dobro dos dois números lidos. O dobro
de A na própria variável A e o dobro de B na própria variável B.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    //Declarando variáveis
    int A, B; 

    //Lendo variáveis do teclado
    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: "); 
    scanf("%d", &B); 

    //Declarando Ponteiros 
    int* p1;
    int *p2; 

    //Apontando os ponteiros para as variáveis declaradas
    p1 = &A; 
    p2 = &B;
    
    //Fazendo a soma do dobro dos dois numeros lidos utilizando ponteiro
    printf("\nA soma do dobro dos dois numero lidos eh: %d", ((*p1) *2) + ((*p2) *2));


    return 0; 
}
----------------------------------------------------------------------------------------
/*6 Escreva um programa que declare duas variáveis do tipo inteiro e duas do
tipo ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros,
o programa deve ler dois números para essas variáveis e os imprimir,
realizando as quatro operações básicas de matemática com esses números.*/

#include<stdio.h>
#include<stdlib.h>

int main (){

    //Declarando Variáveis
    int A, B; 

    //Declarando Ponteiros
    int *p1, *p2; 

    //Lendo variáveis do teclado
    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: "); 
    scanf("%d", &B); 

    //Apontando os ponteiros para as variáveis declaradas
    p1 = &A; 
    p2 = &B;

    //Realizando as operações básicas com os valors 
    printf("\nA soma  dos dois numero lidos eh: %d", ((*p1) + (*p2)));
    printf("\nA subtracao  dos dois numero lidos eh: %d", ((*p1) - (*p2)));
    printf("\nA multiplicacao  dos dois numero lidos eh: %d", ((*p1) * (*p2)));
    printf("\nA divisao  dos dois numero lidos eh: %d", ((*p1) / (*p2)));

return 0; 
}
--------------------------------------------------------------------------------------
/*7 Faça um programa que declare três variáveis do tipo inteiro e três do tipo
ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros, leia
três números e os imprima em ordem crescente. O programa deve
apresentar também o endereço de memória desses números.*/
#include<stdio.h>
#include<stdlib.h>

int main (){

    //Declarando Variáveis
    int A, B, C, p4; 

    //Declarando Ponteiros
    int *p1, *p2, *p3; 

    //Lendo variáveis do teclado
    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: "); 
    scanf("%d", &B); 
    printf("Informe o valor de C: "); 
    scanf("%d", &C); 
    
    //Apontando os ponteiros para as variáveis declaradas
    p1 = &A; 
    p2 = &B;
    p3 = &C; 
     

    if (*p1 > *p2){
        p4 = *p1;
        *p1 = *p2; 
        *p2 = p4; 
    } 
    if (*p2 > *p3){
        p4 = *p2;
        *p2 = *p3;
        *p3 = p4;
    
    if(*p1 > *p2){
        p4 = *p1; 
        *p2 = *p2;
        *p2 = p4; 
    }
}
    printf("\nOrdem crescebte dos numeros: %d, %d, %d", *p1, *p2, *p3); 

return 0; 
}
--------------------------------------------------------------------------------------
/*8 Faça um programa que leia seis números e armazene-os em um vetor.
Utilizando aritmética de ponteiro, imprima os valores do vetor. O programa
deve apresentar também o endereço de memória desses números.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    //Declarando vetor
    int vet[6] = {1, 2, 3, 4, 5, 6}; 
    int i; 

    
    //Declarando Ponteiros 
    int *p = vet;

    for (i=0; i<6; i++){
        printf("\nValor: %d", *(p+i));
        printf("\nEndereco: %p", &p+i); 
    }
    
    return 0; 
}
