1. Faça um programa que receba dois números e mostre qual deles é o maior.
#include <stdio.h>

int main()
{
   int num1 = 0;
   int num2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    printf("O primeiro numero e maior.");

    else if (num1 < num2)
    printf("O segundo numero e maior.");

    else
    printf("Os numeros sao iguais.");

    return 0;
}


2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do
número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
#include <stdio.h>
#include <math.h>

int main()
{
   int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0)
    printf("A raiz quadrada do numero e: %f", sqrt(num));
    else
    printf("O numero e inválido.");

    return 0;
}


3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o
número ao quadrado.
#include <stdio.h>
#include <math.h>
int main()
{
   float num = 0

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num >= 0)
    printf("A raiz quadrada do numero e: %f", sqrt(num));
    else
    printf("O numero ao quadrado e: %f", num * num);

    return 0;
}


4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: O número
digitado ao quadrado A raiz quadrada do número digitado
#include <stdio.h>
#include <math.h>

int main()
{
   int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("O numero digitado ao quadrado e: %d\n", num * num);
        printf("A raiz quadrada do numero digitado e: %f", sqrt(num));
    }

    return 0;
}


5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
#include <stdio.h>

int main()
{
   int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    printf("O numero e par.");
    else
    printf("O numero e impar.");
    return 0;
}


6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como
a diferença existente entre ambos.
#include <stdio.h>

int main()
{
   int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    printf("O primeiro numero e maior. A diferença entre eles e: %d", num1 - num2);
    else if (num1 < num2)
    printf("O segundo numero e maior. A diferença entre eles e: %d", num2 - num1);
    else
    printf("Os numeros sao iguais.");

    return 0;
}


7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”
#include <stdio.h>

int main()
{
   int num1 = 0;
   int num2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    printf("O primeiro numero e maior.");
    else if (num1 < num2)
    printf("O segundo numero e maior.");
    else
    printf("Os numeros sao iguais.");
    return 0;
}


8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela
a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde
caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa
termina.
#include <stdio.h>

int main()
{
   float nota1 = 0;
   float nota2 = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
    printf("A media das notas e: %f", (nota1 + nota2) / 2);
    else
    printf("Uma das notas nao e válida.");

    return 0;
}


9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”




10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura): Homens: (72,7 * h) – 58,0
Mulheres: (62,1 * h) – 44,7
#include <stdio.h>

int main()
{
   float altura = 0;
   float pesoIdeal = 0;
   char sexo = 0;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);
    if (sexo == 'M') && (sexo == 'm')
    pesoIdeal = (72.7 * altura) - 58.0;
    else if (sexo == 'F') && (sexo == 'f')
    pesoIdeal = (62.1 * altura) - 44.7;
    else {
        printf("Sexo inválido.");
        return 3;
    }

    printf("O peso ideal e: %f", pesoIdeal);

    return 0;
}


11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma
de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o
número lido não for maior do que zero, o programa terminará com a mensagem: “Número inválido”
#include <stdio.h>

int main()
{
   int num = 0;
   int soma = 0;

    printf("Digite um numero inteiro maior do que zero: ");
    scanf("%d", &num);

    if (num > 0)
    {
        while (num > 0)
        {
           soma += num % 10;
           num /= 10;
        }
        printf("A soma dos algarismos e: %d", soma);
    }
    else printf("Numero inválido.");

    return 0;
}

12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número inválido”. Se
o número for positivo, calcular o logaritmo deste número.
#include <stdio.h>
#include <math.h>

int main()
{
   int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) printf("O logaritmo do numero e: %f", log10(num));
    else printf("O numero e inválido.");

    return 0;
}


13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e indicar
se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60
pontos.
#include <stdio.h>

int main()
{
   float nota1 = 0;
   float nota2 = 0;
   float nota3 = 0;
   float media = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + (nota3 * 2)) / 4;

    if (media >= 60)
    printf("A media das notas e: %f. O aluno foi aprovado.", media);
    else
    printf("A media das notas e: %f. O aluno foi reprovado.", media);

    return 0;
}


14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0
até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame
final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de
Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se
o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça
todas as verificações necessárias.
#include <stdio.h>

int main()
{

    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float media = 0;


    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &nota1);

    printf("Digite a nota da avaliaçao semestral: ");
    scanf("%f", &nota2);

    printf("Digite a nota do exame final: ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    if (media >= 0 && media <= 2.9)
    printf("A media das notas e: %f. O aluno foi reprovado.", media);
    else if (media >= 3 && media <= 4.9)
    printf("A media das notas e: %f. O aluno está de recuperaçao.", media);
    else if (media >= 5 && media <= 10)
    printf("A media das notas e: %f. O aluno foi aprovado.", media);
    else printf("Uma das notas nao e válida.");

    return 0;
}


15. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante.
#include <stdio.h>

int main()
{
   int dia = 0;

    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &dia);

    switch (dia)
    {
      case 1:
         printf("Domingo");
         break;
      case 2:
         printf("Segunda-feira");
         break;
      case 3:
         printf("Terça-feira");
          break;
        case 4:
          printf("Quarta-feira");
          break;
        case 5:
          printf("Quinta-feira");
          break;
        case 6:
          printf("Sexta-feira");
          break;
        case 7:
          printf("Sábado");
          break;
        default:
          printf("Numero inválido.");
          break;
    }

    return 0;
}


16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.
#include <stdio.h>

int main()
{
   int mes = 0;

    printf("Digite um numero entre 1 e 12: ");
    scanf("%d", &mes);

    switch (mes)
    {
      case 1:
         printf("Janeiro");
         break;
      case 2:
         printf("Fevereiro");
         break;
      case 3:
         printf("Março");
         break;
      case 4:
         printf("Abril");
         break;
      case 5:
         printf("Maio");
         break;
      case 6:
         printf("Junho");
          break;
        case 7:
          printf("Julho");
          break;
        case 8:
          printf("Agosto");
          break;
        case 9:
          printf("Setembro");
          break;
        case 10:
          printf("Outubro");
          break;
        case 11:
          printf("Novembro");
          break;
        case 12:
          printf("Dezembro");
          break;
        default:
          printf("Numero inválido.");
          break;
    }

    return 0;
}


17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: 𝐴 = (basemaior +
basemenor) ∗ altura / 2 Lembre-se a base maior e a base menor devem ser números maiores que
zero.
#include <stdio.h>

int main()
{
   float base_maior = 0;
   float base_menor = 0;
   float altura = 0;
   float area = 0;

    printf("Digite a base maior: ");
    scanf("%f", &base_maior);

    printf("Digite a base menor: ");
    scanf("%f", &base_menor);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (base_maior > 0 && base_menor > 0)
    {
        area = ((base_maior + base_menor) * altura) / 2;
        printf("A área do trapezio e: %f", area);
    }
        else
        printf("As bases devem ser maiores que zero.");


    return 0;
}


18. Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas
(as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois
valores numéricos e realiza a operação, mostrando o resultado e saindo.
#include <stdio.h>

int main()
{
   int opcao = 0;
   float num1 = 0;
   float num2 = 0;

    printf("Escolha uma opçao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtraçao\n");
    printf("3 - Multiplicaçao\n");
    printf("4 - Divisao\n");
    printf("Opçao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (opcao) {
      case 1:
         printf("A soma e: %f", num1 + num2);
         break;
      case 2:
         printf("A subtraçao e: %f", num1 - num2);
         break;
      case 3:
         printf("A multiplicaçao e: %f", num1 * num2);
         break;
      case 4:
         printf("A divisao e: %f", num1 / num2);
         break;
      default:
         printf("Opçao inválida.");
    }
     return 0;
}

19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas,
não simultaneamente pelos dois.
#include <stdio.h>

int main()
{
   int num = 0;

     printf("Digite um numero: ");
     scanf("%d", &num);

     if (num % 3 == 0 && num % 5 == 0)
     printf("O numero e divisivel por 3 e 5.");
     else if (num % 3 == 0)
     printf("O numero e divisivel por 3.");
     else if (num % 5 == 0)
      printf("O numero e divisivel por 5.");
     else
    printf("O numero nao e divisivel por 3 ou 5.");

     return 0;
}


20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e, se
forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes conceitos: O
comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados; Chama-se
equilátero o triângulo que tem três lados iguais; Denominam-se isósceles o triângulo que tem o
comprimento de dois lados iguais; Recebe o nome de escaleno o triângulo que tem os três lados
diferentes;
#include <stdio.h>

int main()
{
    int a = 0;
  int a = 0;
  int a = 0;

     printf("Digite o primeiro lado: ");
     scanf("%d", &a);

     printf("Digite o segundo lado: ");
     scanf("%d", &b);

     printf("Digite o terceiro lado: ");
     scanf("%d", &c);

     if (a < b + c && b < a + c && c < a + b)
     {
      if (a == b && b == c)
          printf("O triângulo e equilátero.");
      else if (a == b || b == c || a == c)
          printf("O triângulo e isosceles.");
      else
          printf("O triângulo e escaleno.");
    }
    else
       printf("Os lados nao formam um triângulo.");

    return 0;
}


21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida. Escolha a opção: 1- Soma de 2 números. 2-
Diferença entre 2 números (maior pelo menor). 3- Produto entre 2 números. 4- Divisão entre 2
números (o denominador não pode ser zero). Opção
#include <stdio.h>

int main()
{
   int opcao = 0;
   float num1 = 0;
   float num1 = 0;

    printf("Escolha uma opçao:\n");
    printf("1 - Soma\n");
    printf("2 - Diferença\n");
    printf("3 - Produto\n");
    printf("4 - Divisao\n");
    printf("Opçao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (opcao) {
      case 1:
         printf("A soma e: %f", num1 + num2);
         break;
      case 2:
         printf("A diferença e: %f", num1 - num2);
         break;
      case 3:
         printf("O produto e: %f", num1 * num2);
         break;
      case 4:
         if (num2 != 0) {
             printf("A divisao e: %f", num1 / num2);
          } else {
             printf("O denominador nao pode ser zero.");
          }
          break;
        default:
          printf("Opçao inválida.");
    }

    return 0;
}


22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar.
As condições para aposentadoria são Ter pelo menos 65 anos; Ou ter trabalhado pelo menos 30
anos; Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
#include <stdio.h>

int main()
{
   int idade = 0;
   int tempo_servico = 0;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de serviço do trabalhador: ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25))
        printf("O trabalhador pode se aposentar.");
     else
        printf("O trabalhador nao pode se aposentar.");


    return 0;
}


23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível
por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996.
#include <stdio.h>

int main()
{
   int ano = 0;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
      printf("O ano e bissexto.");
    else
     printf("O ano nao e bissexto.");

    return 0;
}


24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma
taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa
em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final
do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for
válido, mostrar uma mensagem de erro.
#include <stdio.h>

int main()
{
   float valor = 0
   float imposto = 0;
   char estado = 0;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado de destino do produto (MG, SP, RJ ou MS): ");
    scanf(" %c", &estado);

    switch (estado)
    {
      case 'MG':
         imposto = 0.07;
         break;
      case 'SP':
         imposto = 0.12;
         break;
      case 'RJ':
         imposto = 0.15;
         break;
      case 'MS':
         imposto = 0.08;
         break;
      default:
         printf("Estado inválido.");
         return 0;
    }

    printf("O valor final do produto e: %f", valor * (1 + imposto));

    return 0;
}
25. Calcule as raízes da equação de 2º grau. A variável a tem que ser diferente de zero. Caso seja
igual, imprima a mensagem “Não é equação de segundo grau”. Se < 0, não existe real. Imprima a
mensagem “Não existe raiz”. Se = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz
única”. Se 0, imprima as duas raízes reais.
#include <stdio.h>
#include <math.h>

int main()
{
   float a = 0;
   float b = 0;
   float c = 0;
   float delta = 0;
   float x1;
   float x2;


    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a != 0)
    {
        delta = b * b - 4 * a * c;
        if (delta < 0) printf("Nao existe raiz.");
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("Raiz unica: %f", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raizes reais: %f e %f", x1, x2);
        }
    }
    else
      printf("Nao e equaçao de segundo grau.");

    return 0;
}


26. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
#include <stdio.h>
int main()
{
   float distancia, litros, consumo;

    printf("Digite a distância percorrida (em Km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    if (consumo < 8) printf("Venda o carro!");
    else if (consumo <= 14) printf("Econômico!");
    else printf("Super econômico!");

    return 0;
}


27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
categorias:
#include <stdio.h>

int main()
{
   int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) printf("Infantil A");
    else if (idade >= 8 && idade <= 10) printf("Infantil B");
    else if (idade >= 11 && idade <= 13) printf("Juvenil A");
    else if (idade >= 14 && idade <= 17) printf("Juvenil B");
    else if (idade >= 18) printf("Sênior");
    else printf("Idade inválida.");

    return 0;
}


28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
#include <stdio.h>
#include <math.h>

int main()
{
   int num1, num2, num3, opcao;
   float media;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Escolha uma opçao:\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmônica\n");
    printf("4 - Aritmetica\n");
    printf("Opçao: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
         media = pow(num1 * num2 * num3, 1.0 / 3.0);
         printf("A media geometrica e: %f", media);
         break;
      case 2:
         media = ((1 * num1) + (2 * num2) + (3 * num3)) / 3;
         printf("A media ponderada e: %f", media);
         break;
      case 3:
         media = 1 / ((1.0 / num1) + (1.0 / num2) + (1.0 / num3));
         printf("A media harmônica e: %f", media);
         break;
      case 4:
         media = (num1 + num2 + num3) / 3.0;
         printf("A media aritmetica e: %f", media);
         break;
      default:
         printf("Opçao inválida.");
    }

    return 0;
}


29. Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros
menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a
soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao
aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno
acertou.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num1 = 0;
  int num2 = 0;
     int resposta = 0;
  int acertos = 0;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
       num1 = rand() % 100 + 1;
       num2 = rand() % 100 + 1;

        printf("Qual e a soma de %d + %d? ", num1, num2);
        scanf("%d", &resposta);

        if (resposta == num1 + num2)
        {
            printf("Resposta correta!\n");
            acertos++;
        }
        else printf("Resposta incorreta!\n");
    }

    printf("Você acertou %d questões.", acertos);

    return 0;
}


30. Faça um programa que receba três números e mostre-os em ordem crescente.


31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostre qual a classificação dessa pessoa.
#include <stdio.h>

int main()
{
   float altura = 0
   float peso = 0;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (altura < 1.20) {
        if (peso <= 60) printf("Classificaçao: A");
        else if (peso <= 90) printf("Classificaçao: D");
       else printf("Classificaçao: G");
    } else if (altura <= 1.70) {
       if (peso <= 60) printf("Classificaçao: B");
       else if (peso <= 90) printf("Classificaçao: E");
       else printf("Classificaçao: H");
    } else {
       if (peso <= 60) printf("Classificaçao: C");
       else if (peso <= 90) printf("Classificaçao: F");
       else printf("Classificaçao: I");
    }

    return 0;
}


32. Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e
a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada
execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:
#include <stdio.h>

int main()
{
   int codigo;
   float quantidade = 0
   float preco = 0;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%f", &quantidade);

    switch (codigo)
    {
      case 100:
         preco = 1.20;
         break;
      case 101:
         preco = 1.30;
         break;
      case 102:
         preco = 1.50;
         break;
      case 103:
         preco = 1.20;
         break;
      case 104:
         preco = 1.70;
         break;
      case 105:
         preco = 2.20;
         break;
        case 106:
          preco = 1.00;
          break;
        default:
          printf("Codigo inválido.");
          return 0;
    }

    printf("O valor a ser pago e: %f", quantidade * preco);

    return 0;
}

33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e
escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a
segunda tabela).
#include <stdio.h>

int main()
{
   float preco_antigo = 0;
   float preco_novo = 0;
   float percentual = 0;

    printf("Digite o preço antigo do produto: ");
    scanf("%f", &preco_antigo);

    if (preco_antigo <= 50) percentual = 0.05;
    else if (preco_antigo <= 100) percentual = 0.1;
    else percentual = 0.15;

    preco_novo = preco_antigo * (1 + percentual);

    printf("O preço novo do produto e: %f\n", preco_novo);

    if (preco_novo <= 80) printf("Barato");
    else if (preco_novo <= 120) printf("Normal");
    else if (preco_novo <= 200) printf("Caro");
    else printf("Muito caro");

    return 0;
}


34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
#include <stdio.h>

int main()
{
   float nota = 0;
   int faltas = 0;
    char conceito = 0;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0) conceito = 'A';
    else if (nota >= 7.5) conceito = 'B';
    else if (nota >= 5.0) conceito = 'C';
    else if (nota >= 4.0) conceito = 'D';
    else conceito = 'E';

    if (faltas > 20) conceito++;

    printf("Conceito: %c", conceito);

    return 0;
}


35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o
dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não
bissextos.
#include <stdio.h>

int main()
{
   int dia = 0;
   int mes = 0;
   int ano = 0;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Mês inválido.");
    } else if (dia < 1 || dia > 31) {
        printf("Dia inválido.");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            printf("Dia inválido.");
        } else {
            printf("Data válida.");
        }
    } else if (mes == 2) {
       if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
           if (dia > 29) {
               printf("Dia inválido.");
           } else {
               printf("Data válida.");
           }
       } else {
           if (dia > 28) {
               printf("Dia inválido.");
           } else {
               printf("Data válida.");
           }
       }
    } else {
       printf("Data válida.");
    }

    return 0;
}


36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao
vendedor. Para calcular a comissão, considere a tabela abaixo:
#include <stdio.h>

int main()
{
   float venda = 0
   float comissao = 0;

    printf("Digite o valor da venda: ");
    scanf("%f", &venda);

    if (venda >= 100000) {
        comissao = 700 + venda * 0.16;
    } else if (venda >= 80000) {
        comissao = 650 + venda * 0.14;
    } else if (venda >= 60000) {
        comissao = 600 + venda * 0.14;
    } else if (venda >= 40000) {
        comissao = 550 + venda * 0.14;
    } else if (venda >= 20000) {
        comissao = 500 + venda * 0.14;
    } else {
        comissao = 400 + venda * 0.14;
    }

    printf("A comissao e: %f", comissao);

    return 0;
}
37. As tarifas de certo parque de estacionamento são as seguintes: 1 a e 2a hora - R$1,00 cada; 3 a
e 4a hora - R$1,40 cada; 5 a hora e seguintes - R$2,00 cada O número de horas a pagar é sempre
inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos pagará por
duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de
chegada ao parque e partida deste são apresentados na forma de pares de inteiros, representando
horas e minutos. Por exemplo, o par 12 50 representará “dez para a uma da tarde”. Pretende-se criar
um programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela o preço
cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com intervalo não
superior a 24 horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é
uma situação de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
#include <stdio.h>

int main()
{
   int hora_chegada = 0;
   int minuto_chegada = 0;
   int hora_partida = 0;
   int minuto_partida = 0;
   int tempo_chegada = 0;
   int tempo_partida = 0;
   int tempo_permanencia = 0;
   int horas_permanencia = 0;
   float total_pagar = 0;

  printf("Digite as horas e minutos da chegada: ");
  scanf("%d %d", &hora_chegada, &minuto_chegada);

  printf("Digite as horas e minutos da partida: ");
  scanf("%d %d", &hora_partida, &minuto_partida);

  if (hora_chegada > hora_partida) hora_chegada -= 24;

  tempo_chegada = hora_chegada * 60 + minuto_chegada;
  tempo_partida = hora_partida * 60 + minuto_partida;
  tempo_permanencia = tempo_partida - tempo_chegada;

  if (tempo_permanencia % 60 > 0) {
      horas_permanencia = tempo_permanencia / 60 + 1;
  } else {
      horas_permanencia = tempo_permanencia / 60;
  }

  if (horas_permanencia <= 2) {
      total_pagar = horas_permanencia * 1;
  } else if (horas_permanencia <= 4) {
      total_pagar = horas_permanencia * 1.4;
  } else {
      total_pagar = horas_permanencia * 2;
  }
    printf("O total a pagar e de R$%.2f", total_pagar);

    return 0;
}


38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,
Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia
fornecido é um dia válido: dia > 0, dia 28 para o mês de fevereiro (29 se o ano for bissexto), dia 30
em abril, junho, setembro e novembro, dia 31 nos outros meses. Teste a validade do mês: mês > 0 e
mês < 13. Teste a validade do ano: ano ano atual (use uma constante definida com o valor igual a
2022). Imprimir: “data válida” ou “data inválida” no final da execução do programa.
int main()
{

          int dia = 0;
     int mes = 0;
     int ano = 0;

          printf("Informe dia de nascimento:" );
          scanf("%d",&dia);
          printf("Informe o mês de nascimento:");
          scanf("%d",&mes);
          printf("Informe o ano de nascimento:");
          scanf("%d",&ano);

          if(dateValidator(dia,mes,ano))
                  printf(" Data de nascimento inválida\n ");
          else
                  printf("\n Data de nascimento válida ");

          return 0;


39. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário maior, e
conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de
salário. Faça um programa que leia: o valor do salário atual do funcionário; o tempo de serviço
desse funcionário na empresa (número de anos de trabalho na empresa). Use as tabelas abaixo para
calcular o salário reajustado deste funcionário e imprima o valor do salário final reajustado, ou uma
mensagem caso o funcionário não tenha direito a nenhum aumento.
#include<stdio.h>
#include<math.h>
int main()
{
 float aumento,salario;
 int funcionario;
 printf("Digite o seu numero de Funcionario:");
 scanf ("%d",&funcionario);
 printf("Digite seu salario:");
 scanf("%f",&salario);
printf("Seu salario e %f\n",salario);
 if (salario>=0.0&&salario<=400.0) { aumento=0.15;salario=salario+(aumento*salario); }
 if (salario>=400.01&&salario<=700.0) { aumento=0.12;salario=salario+(aumento*salario); }
 if (salario>=700.01&&salario<=1000.0) { aumento=0.10;salario=salario+(aumento*salario); }
 if (salario>=1000.01&&salario<=1800.0) { aumento=0.07;salario=salario+(aumento*salario); }
 if (salario>=1800.01&&salario<=2500.0) { aumento=0.04;salario=salario+(aumento*salario);}
 if (salario>2500) aumento=0;
 printf("voce e o funcionario numero %d e o seu salario ficou igual a %f apos o aumento de
%f%%\n",funcionario,salario,aumento);

return(0);
}

40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de
acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.
#include <stdio.h>

int main()
{
   float custo_fabrica = 0;
   float custo_consumidor = 0;
   float comissao, impostos = 0;

    printf("Digite o custo de fábrica: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000) comissao = 0.05;
    else if (custo_fabrica <= 25000) comissao = 0.1;
    else comissao = 0.15;

    if (custo_fabrica <= 12000)
      impostos = 0;
    else if (custo_fabrica <= 25000)
      impostos = 0.15;
    else
       impostos = 0.2;

    custo_consumidor = custo_fabrica * (1 + comissao + impostos);

    printf("O custo ao consumidor e: %f", custo_consumidor);

    return 0;
}

