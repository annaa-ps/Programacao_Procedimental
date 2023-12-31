/*1 Faça um programa que leia 2 valores inteiros e chame uma função que
receba estas 2 variáveis e troque o seu conteúdo, i.e., esta função é
chamada passando duas variáveis A e B, por exemplo, e após a execução da
função, A conterá o valor de B e B terá o valor de A. Imprima os valores
antes e depois da troca.*/ 

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int receba_A(int A)
{
    int *A_pont,*B_pont;
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("Digite o valor da variável A \n");
    A_pont = &A;
    scanf("%d",A_pont);
    return *A_pont;
}
int receba_B(int B)
{
    int *A_pont,*B_pont;
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("Digite o valor da variável B\n");
    B_pont = &B;
    scanf("%d",B_pont);
    return *B_pont;
}

int main ()
{
    int A, B, aux, *A_pont,*B_pont;
    *B_pont = receba_B(B);
    *A_pont = receba_A(A);
    aux = *B_pont;
    *B_pont = *A_pont;
    *A_pont = aux;
    printf("Valor de A: %d \n Valor de B: %d",*A_pont,*B_pont);
    return 0;
}
-------------------------------------------------------------------------
/*2 Faça um programa que leia dois valores inteiros e chame uma função que
receba estes 2 valores de entrada e retorne o maior valor na primeira
variável e o menor valor na segunda variável. Escreva o conteúdo das 2
variáveis na tela.*/ 

#include <stdio.h>

void trocarValores(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    trocarValores(&valor1, &valor2);

    printf("O maior valor eh: %d\n", valor1);
    printf("O menor valor eh: %d\n", valor2);

    return 0;
}
------------------------------------------------------------------
3 Crie um programa que contenha uma função que permita passar por
parâmetro dois números inteiros A e B. A função deverá calcular a soma
entre estes dois números e armazenar o resultado na variável A. Esta função
não deverá possuir retorno, mas deverá modifcar o valor do primeiro
parâmetro. Imprima os valores de A e B na função principal.

#include <stdio.h>

void calcularSoma(int *a, int b) {
    *a = *a + b;
}

int main() {
    int valorA, valorB;

    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    calcularSoma(&valorA, valorB);

    printf("Valor de A: %d\n", valorA);
    printf("Valor de B: %d\n", valorB);

    return 0;
}

------------------------------------------------------------
4 Faça um programa que leia três valores inteiros e chame uma função que
receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o
menor valor na primeira variável, o segundo menor valor na variável do
meio, e o maior valor na última variável. A função deve retornar o valor 1 se
os três valores forem iguais e 0 se existirem valores diferentes. Exibir os
valores ordenados na tela.

#include <stdio.h>

int ordenarValores(int *a, int *b, int *c) {
    int troca;
    int iguais = 0;

    // Ordenar os valores usando o algoritmo de bubble sort
    if (*a > *b) {
        troca = *a;
        *a = *b;
        *b = troca;
    }
    if (*b > *c) {
        troca = *b;
        *b = *c;
        *c = troca;
    }
    if (*a > *b) {
        troca = *a;
        *a = *b;
        *b = troca;
    }

    // Verificar se os valores são iguais
    if (*a == *b && *b == *c) {
        iguais = 1;
    }

    return iguais;
}

int main() {
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    int saoIguais = ordenarValores(&valor1, &valor2, &valor3);

    printf("Valores ordenados: %d, %d, %d\n", valor1, valor2, valor3);

    if (saoIguais) {
        printf("Os três valores são iguais.\n");
    } else {
        printf("Os três valores são diferentes.\n");
    }

    return 0;
}
---------------------------------------------------------------------
5 Escreva uma função que dado um número real passado como parâmetro,
retorne a parte inteira e a parte fracionária deste número. Escreva um
programa que chama esta função.
Protótipo: void frac(float num, int *inteiro, float *frac);

#include <stdio.h>
#include <stdlib.h>

void separa(float num, int *x, float *y) {
    *x = (int)num;
    *y = num - *x;
}

int main()
{
    float num, frac;
    int inteira;

    scanf("%f", &num);

    separa(num, &inteira, &frac);

    printf("%f: %i e %f", num, inteira, frac);

    return 0;
}
-----------------------------------------------------------------------
6 Implemente uma função que calcule a área da superfície e o volume de uma
esfera de raio R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume);A área da superfície e o volume são dados, respectivamente, por:

#include <stdio.h>

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * 3.14 * R * R;
    *volume = 4.0 / 3.0 * 3.14 * R * R * R;
}

int main() {
    float raio;
    float area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Área da superfície: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
-------------------------------------------------------------------------
7 Escreva uma função que aceita como parâmetro um array de inteiros com N
valores, e determina o maior elemento do array e o número de vezes que
este elemento ocorreu no array. Por exemplo, para um array com os
seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retorna para
o programa que a chamou o valor 15 e o número 3 (indicando que o número
15 ocorreu 3 vezes). A função deve ser do tipo void.

#include <stdio.h>

void encontrarMaiorElemento(const int array[], int tamanho, int *maior, int *ocorrencias) {
    *maior = array[0];
    *ocorrencias = 1;

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i];
            *ocorrencias = 1;
        } else if (array[i] == *maior) {
            (*ocorrencias)++;
        }
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    int maiorElemento, ocorrencias;
    encontrarMaiorElemento(array, tamanho, &maiorElemento, &ocorrencias);

    printf("Maior elemento: %d\n", maiorElemento);
    printf("Número de ocorrências: %d\n", ocorrencias);

    return 0;
}
-----------------------------------------------------------------------------
8 Implemente uma função que receba como parâmetro um array de números
reais de tamanho N e retorne quantos números negativos há nesse array.
Essa função deve obedecer ao protótipo: int negativos(float *vet, int
N);
#include <stdio.h>

int negativos(float *vet, int N) {
    int contador = 0;

    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    float array[tamanho];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &array[i]);
    }

    int quantidadeNegativos = negativos(array, tamanho);

    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);

    return 0;
}
-----------------------------------------------------------------------------
9 Escreva um programa que declare um array de inteiros e um ponteiro para
inteiros. Associe o ponteiro ao array. Agora, some mais um (+1) a cada
posição do array usando o ponteiro (use *);

#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *ponteiro = array;

    printf("Valores originais do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Valores do array após incremento:\n");
    for (int i = 0; i < 5; i++) {
        (*ponteiro)++;
        printf("%d ", array[i]);
        ponteiro++;
    }
    printf("\n");

    return 0;
}
---------------------------------------------------------------------------
10 Crie uma função para somar dois arrays. Esta função deve receber dois
arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro
e segundo array seja diferente então a função retornará ZERO (0). Caso a
função seja concluída com sucesso a mesma deve retornar o valor UM (1).
Utilize aritmética de ponteiros para manipulação do array.

#include <stdio.h>

int somarArrays(const int *array1, const int *array2, int tamanho, int *resultado) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = array1[i] + array2[i];
    }

    return 1;
}

int main() {
    int tamanho;
    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &tamanho);

    int array1[tamanho];
    int array2[tamanho];
    int resultado[tamanho];

    printf("Digite os elementos do primeiro array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Digite os elementos do segundo array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array2[i]);
    }

    int retorno = somarArrays(array1, array2, tamanho, resultado);

    if (retorno == 0) {
        printf("Tamanhos diferentes dos arrays. Não é possível realizar a soma.\n");
    } else {
        printf("Resultado da soma dos arrays:\n");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");
    }

    return 0;
}
---------------------------------------------------------------------
11 Escreva uma função que retorna o maior valor de um array de tamanho N.
Escreva um programa que leia N valores inteiros, imprima o array com ‘k’
elementos por linha, e o maior elemento. O valor de ‘k’ também deve ser
fornecido pelo usuário.

#include <stdio.h>

int encontrarMaior(const int array[], int tamanho) {
    int maior = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }

    return maior;
}

int main() {
    int N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    int array[N];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int k;
    printf("Digite o valor de 'k': ");
    scanf("%d", &k);

    printf("Array com 'k' elementos por linha:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);

        if ((i + 1) % k == 0) {
            printf("\n");
        }
    }
    printf("\n");

    int maior = encontrarMaior(array, N);
    printf("Maior elemento: %d\n", maior);

    return 0;
}
---------------------------------------------------------------
12 Escreva uma função que receba um array de inteiros V e os endereços de
duas variáveis inteiras, min e max, e armazene nessas variáveis o valor
mínimo e máximo do array. Escreva também uma função main que use essa
função.

#include <stdio.h>

void encontrarMinMax(const int V[], int tamanho, int *min, int *max) {
    *min = V[0];
    *max = V[0];

    for (int i = 1; i < tamanho; i++) {
        if (V[i] < *min) {
            *min = V[i];
        }

        if (V[i] > *max) {
            *max = V[i];
        }
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int V[tamanho];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &V[i]);
    }

    int min, max;
    encontrarMinMax(V, tamanho, &min, &max);

    printf("Valor mínimo: %d\n", min);
    printf("Valor máximo: %d\n", max);

    return 0;
}
------------------------------------------------------------
13 Faça um programa que possua uma função para:
- ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler
2 notas válidas e que devolver os 2 números lidos);
- calcular a média simples e a média ponderada e retorná-las por parâmetro,
onde a segunda nota tem peso 2: media_ponderada = (n1 + n2*2)/3

#include <stdio.h>

void lerNotas(float *nota1, float *nota2) {
    printf("Digite a primeira nota: ");
    scanf("%f", nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2);
}

void calcularMedias(float nota1, float nota2, float *mediaSimples, float *mediaPonderada) {
    *mediaSimples = (nota1 + nota2) / 2;
    *mediaPonderada = (nota1 + nota2 * 2) / 3;
}

int main() {
    float nota1, nota2;
    float mediaSimples, mediaPonderada;

    lerNotas(&nota1, &nota2);
    calcularMedias(nota1, nota2, &mediaSimples, &mediaPonderada);

    printf("Média simples: %.2f\n", mediaSimples);
    printf("Média ponderada: %.2f\n", mediaPonderada);

    return 0;
}
------------------------------------------------------------
Implemente uma função que calcule as raízes de uma equação do segundo
grau do tipo
Ax2+ Bx + C = 0.
Lembrando que:
x=
−b ± √Δ
2aOnde:
Δ=b2−4 ac
A variável a tem que ser diferente de zero.
- Se < 0, não existe real;
- Se = 0, existe uma raiz real;
- Se ≥ 0, existem duas raízes reais.
Essa função deve obedecer ao seguinte protótipo:
int raizes(ﬂoat A, ﬂoat B, ﬂoat C, ﬂoat *X1, ﬂoat *X2);
Essa função deve ter como valor de retorno o número de raízes reais e
distintas da equação. Se existirem raízes reais, seus valores devem ser
armazenados nas variáveis apontadas por X1 e X2.

#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    float delta = B * B - 4 * A * C;

    if (delta < 0) {
        // Não existem raízes reais
        return 0;
    } else if (delta == 0) {
        // Existe uma raiz real
        *X1 = -B / (2 * A);
        return 1;
    } else {
        // Existem duas raízes reais
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}

int main() {
    float A, B, C;
    float X1, X2;

    printf("Digite os coeficientes da equação (A, B, C): ");
    scanf("%f %f %f", &A, &B, &C);

    int numRaizes = raizes(A, B, C, &X1, &X2);

    if (numRaizes == 0) {
        printf("Não existem raízes reais.\n");
    } else if (numRaizes == 1) {
        printf("Existe uma raiz real: X = %.2f\n", X1);
    } else {
        printf("Existem duas raízes reais: X1 = %.2f, X2 = %.2f\n", X1, X2);
    }

    return 0;
}
