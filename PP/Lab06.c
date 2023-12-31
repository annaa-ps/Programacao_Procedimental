/*1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreve o compromisso */

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
  int hora;
  int min; 
  int seg; 
} Horario; 

typedef struct {
  int dia;
  int mes; 
  int ano; 
} Data; 

typedef struct {
   Horario horario;
   Data data;
   char frase[100]; 
} Compromisso; 


int main(){
  Compromisso compromisso;

    printf("\nDigite o dia: " ); 
    scanf("%d",&compromisso.data.dia); 

    printf("\nDigite o mes: " ); 
    scanf("%d",&compromisso.data.mes); 

    printf("\nDigite o ano: " ); 
    scanf("%d",&compromisso.data.ano); 
    
    printf("\nDigite a hora: " ); 
    scanf("%d",&compromisso.horario.hora); 

    printf("\nDigite o minuto: " ); 
    scanf("%d",&compromisso.horario.min); 

    printf("\nDigite o segundo: " ); 
    scanf("%d",&compromisso.horario.seg); 


    printf("\nO compromisso eh dia %d do mes %d de %d, as %d horas %d minutos e %d segundos! ", 
    compromisso.data.dia, compromisso.data.mes, compromisso.data.ano, compromisso.horario.hora, 
    compromisso.horario.min, compromisso.horario.seg); 
  return 0; 
}
--------------------------------------------------------------------------------------
/*2-Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura*/ 
  
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <string.h> 
  
 struct pessoa{ 
     char nome[50]; 
     int idade; 
     char endereco[50]; 
 }; 
  
 int main() { 
     struct pessoa x; 

     printf("Digite o nome da pessoa: \n"); 
     fgets(x.nome,50,stdin); 
     fflush(stdin); 
     printf("Digite a idade da pessoa: \n"); 
     scanf("%d",&x.idade); 
     fflush(stdin); 
     printf("Digite o endereco da pessoa: \n"); 
     fgets(x.endereco,50,stdin); 
     system("pause"); 
     return 0; 
 } 
---------------------------------------------------------------

/*3. Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.*/
  
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
  char nome[100];
  int matricula; 
  char curso[50]; 
} Aluno; 

int main(){
  Aluno aluno[5];
  char nome [100];
  char curso [50]; 
  int i; 

  for(i=0; i<5;i++){
     printf("\nDigite o nome do aluno: " ); 
     setbuf(stdin, NULL);
     fgets(nome, 100, stdin); 
     strcpy(aluno[i].nome, nome);

     printf("\nDigite a matricula do aluno: " ); 
     scanf("%d",&aluno[i].matricula);

     printf("\nDigite o curso do aluno: " ); 
     setbuf(stdin, NULL);
     fgets(curso, 50, stdin); 
     strcpy(aluno[i].curso, curso);
  }


  for(i=0; i<5; i++){
    printf("\n--------------Ficha do aluno-------------"); 
    printf("\nO nome do aluno eh %s", aluno[i].nome);
    printf("A matricula do aluno eh %d: ", aluno[i].matricula);
    printf("\nO curso do aluno eh %s: ", aluno[i].curso);
  }


  return 0; 
}
---------------------------------------------------------------
/*4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.*/
  
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <string.h> 
  
 struct pessoa{ 

     char nome[50]; 
     int numero_de_matricula; 
     float p1, p2, p3; 
 }; 
  
 int main(){ 
     struct pessoa x[5]; 
     int i, m, n, o, p; 
     float j, k, l; 
     printf("---Dados de cinco alunos---\n"); 
     for(i = 0; i < 5; i++){ 
         printf("Nome do aluno: \n"); 
         fgets(x[i].nome,50,stdin); 
         fflush(stdin); 
         printf("1-Digite o numero de matricula do aluno: \n"); 
         scanf("%d",&x[i].numero_de_matricula); 
         fflush(stdin); 
         printf("2-Digite a nota da primeira prova: \n"); 
         scanf("%f",&x[i].p1); 
         printf("3-Digite a nota da segunda prova: \n"); 
         scanf("%f",&x[i].p2); 
         printf("4-Digite a nota da terceira prova: \n"); 
         scanf("%f",&x[i].p3); 
         fflush(stdin); 
     } 
     j = x[0].p1; 
     k = x[0].p1 + x[0].p2 + x[0].p3; 
     l = x[0].p1 + x[0].p2 + x[0].p3; 
     for(i = 1; i < 5; i++){ 
         if(x[i].p1 > j){ 
             j = x[i].p1; 
             m = i; 
         } 
         if(x[i].p1 + x[i].p2 + x[i].p3 > k){ 
             k = x[i].p1 + x[i].p2 + x[i].p3; 
             n = i; 

         } 
         if(x[i].p1 + x[i].p2 + x[i].p3 < l){ 
             l = x[i].p1 + x[i].p2 + x[i].p3; 
             o = i; 
         } 
     } 
     printf("Aluno com a maior nota na primeira prova: "); 
     for(i = 0; x[m].nome[i] != '\0'; i++){ 
         printf("%c",x[m].nome[i]); 
     } 
     printf("\n"); 
     printf("Aluno com a maior media: "); 
     for(i = 0; x[n].nome[i] != '\0'; i++){ 
         printf("%c",x[n].nome[i]); 
     } 
     printf("\n"); 
     printf("Aluno com a menor media: "); 
     for(i = 0; x[o].nome[i] != '\0'; i++){ 
         printf("%c",x[o].nome[i]); 
     } 

     printf("\n---Situacao dos alunos---\n"); 
     for(i = 0; i < 5; i++){ 
         if((x[i].p1 + x[i].p2 + x[i].p3)/3 < 6){ 
             printf("Reprovado: "); 
             for(p = 0; x[i].nome[p] != '\0'; p++){ 
                 printf("%c",x[i].nome[p]); 
             } 
             printf("\n"); 
         }else{ 
             printf("Aprovado: "); 
             for(p = 0; x[i].nome[p] != '\0'; p++){ 
                 printf("%c",x[i].nome[p]); 
             } 
             printf("\n"); 
         } 
     } 
     printf("\n"); 
     system("pause"); 
     return 0; 
 } 
---------------------------------------------------------------------------------
/*5. Considerando a estrutura
struct vetor {
float a;
float b;
float c;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.*/
  
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <string.h> 
  
 struct vetor{ 
     float a; 
     float b; 
     float c; 
 }; 
  
 int main(){ 
     struct vetor vet[3]; 
     printf("Digite as medidas do primeiro vetor: \n"); 
     scanf("%f %f %f",&vet[0].a,&vet[0].b,&vet[0].c); 
     printf("Digite as medidas do segundo vetor: \n"); 
     scanf("%f %f %f",&vet[1].a,&vet[1].b,&vet[1].c); 
     vet[2].a = vet[0].a + vet[1].a; 
     vet[2].b = vet[0].b + vet[1].b; 
     vet[2].c = vet[0].c + vet[1].c; 
     printf("Medidas do vetor formado pela soma dos outros dois: %f %f %f\n",vet[2].a,vet[2].b,vet[2].c); 
     system("pause"); 
     return 0; 
 } 
-----------------------------------------------------------------------------------------
/*6. Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até
10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor de
estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais
(use uma média ponderada: Nota1 com peso = 1.0 e Nota2 com peso = 2.0).*/
  
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
  char nome[100];
  int matricula; 
  char codigo_disc[50]; 
  int nota1, nota2; 
} Alunos; 

int main(){
  Alunos aluno[10];
  char nome [100];
  char codigo_disc[50]; 
  float media[10]; 
  int i; 

  for(i=0; i<10;i++){
     printf("\nDigite o nome do aluno: " ); 
     setbuf(stdin, NULL);
     fgets(nome, 100, stdin); 
     strcpy(aluno[i].nome, nome);

     printf("\nDigite a matricula do aluno: " ); 
     scanf("%d",&aluno[i].matricula);

     printf("\nDigite o codigo da disciplina: " ); 
     setbuf(stdin, NULL);
     fgets(codigo_disc, 50, stdin); 
     strcpy(aluno[i].codigo_disc, codigo_disc);


     printf("\nDigite a nota 1: ");
     scanf("%d", &aluno[i].nota1); 
     printf("\nDigite a nota 2: ");
     scanf("%d", &aluno[i].nota2); 
     media[i] = (aluno[i].nota1*1 + aluno[i].nota2*2)/3;

  }

  for(i=0; i<10; i++){
    printf("\nFicha do Aluno: ");
    printf("\nNome: %s ", aluno[i].nome); 
    printf("Matricula: %d ", aluno[i].matricula);
    printf("\nCogido da discuplina: %s ", aluno[i].codigo_disc);
    printf("Media final: %.2f", media[i]); 
    printf("\n--------------------------");


  }

  return 0; 
}
---------------------------------------------------------------------------------------

----------------------------------------------------------------------------------------
/*8. Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
e exibidos na tela.*/
  
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <string.h> 
  
 struct Data { 
   int dia; 
   int mes; 
   int ano; 
 }; 
  
 struct Funcionario { 
   char nome[100]; 
   int idade; 
   char sexo; 
   char cpf[12]; 
   struct Data data_nascimento; 
   int codigo_setor; 
   char cargo[30]; 
   float salario; 
 }; 
  

 int main() { 
   struct Funcionario funcionario; 
  
   printf("Digite o nome do funcionário:\n"); 
   setbuf(stdin, NULL); 
   fgets(funcionario.nome, 100, stdin);   
  
   printf("Digite a idade do funcionário:\n"); 
   scanf("%d", &funcionario.idade); 
  
   printf("Digite o sexo do funcionário (M/F):\n"); 
   scanf(" %c", &funcionario.sexo);   
  
   printf("Digite o CPF do funcionário:\n"); 
   setbuf(stdin, NULL); 
   fgets(funcionario.cpf, 12, stdin);   
  
   printf("Digite o dia de nascimento do funcionário:\n"); 
   scanf("%d", &funcionario.data_nascimento.dia); 
   printf("Digite o mês de nascimento do funcionário:\n"); 
   scanf("%d", &funcionario.data_nascimento.mes); 
   printf("Digite o ano de nascimento do funcionário:\n"); 
   scanf("%d", &funcionario.data_nascimento.ano); 
  
   printf("Digite o código do setor do funcionário:\n"); 
   scanf("%d", &funcionario.codigo_setor); 
  
   printf("Digite o cargo do funcionário:\n"); 
   setbuf(stdin, NULL); 
   fgets(funcionario.cargo, 30, stdin);   
  
   printf("Digite o salário do funcionário:\n"); 
   scanf("%f", &funcionario.salario); 

  
   printf("\n\n\n"); 
  
   printf("Nome: %s\n", funcionario.nome); 
   printf("Idade: %d\n", funcionario.idade); 
   printf("Sexo: %c\n", funcionario.sexo); 
   printf("CPF: %s\n", funcionario.cpf); 
   printf("Data de nascimento: %d/%d/%d\n", funcionario.data_nascimento.dia, funcionario.data_nascimento.mes, funcionario.data_nascimento.ano); 
   printf("Código do setor: %d\n", funcionario.codigo_setor); 
   printf("Cargo: %s\n", funcionario.cargo); 
   printf("Salário: %.2f\n", funcionario.salario);   

   return 0; 
 } 
----------------------------------------------------------------------------------
/*10. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.*/
  
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <string.h> 
  
   
 struct Pessoa 
 { 
   char nome[100]; 
   char endereco[100]; 
   char telefone[100]; 
 }; 
  
 int main(){ 
   struct Pessoa pessoas[5]; 
  
   for (int i = 0; i < 5; i++){ 
     printf("Digite o nome da pessoa %d: ", i + 1); 
     setbuf(stdin, NULL); 
     fgets(pessoas[i].nome, 100, stdin); 
  

     printf("Digite o endereço da pessoa %d: ", i + 1); 
     setbuf(stdin, NULL); 
     fgets(pessoas[i].endereco, 100, stdin); 
  
     printf("Digite o telefone da pessoa %d: ", i + 1); 
     setbuf(stdin, NULL); 
     fgets(pessoas[i].telefone, 100, stdin); 
     printf("\n"); 
   } 
  
   // ordene as pessoas pelo nome em ordem alfabética 
   int ordem[5]; 
   for (int i = 0; i < 5; i++){ 
     ordem[i] = i; 
   } 
  
   for (int i = 0; i < 5; i++){ 
     for (int j = 0; j < 5; j++){ 
       if (strcmp(pessoas[ordem[i]].nome, pessoas[ordem[j]].nome) < 0){ 
         int aux = ordem[i]; 
         ordem[i] = ordem[j]; 
         ordem[j] = aux; 
       } 
     } 
   } 
  
   for (int i = 0; i < 5; i++){ 
     printf("Nome: %s\n", pessoas[ordem[i]].nome); 
     printf("Endereço: %s\n", pessoas[ordem[i]].endereco); 
     printf("Telefone: %s\n", pessoas[ordem[i]].telefone); 

     printf("\n"); 
   } 
  
   return 0; 
 } 
---------------------------------------------------------------------------------
/*11. Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final),
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a
aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados
do vetor de reprovados.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//estrutura para guardar os dados dos alunos
typedef struct 
{
    char nome[30];
    int matricula;
    float mediaFinal;
} Aluno;

//Função apenas para facilitar a vida de quem testa o código
void inserirStruct(Aluno *aluno, char *nome, int matricula, float mediaFinal)
{
    strcpy(aluno->nome, nome);
    aluno->matricula = matricula;
    aluno->mediaFinal = mediaFinal;
}

int main()
{   
    Aluno aluno[10];//Vetor de alunos
    Aluno aprovados[10];//vetor de alunos aprovados
    Aluno reprovados[10];//Vetor de alunos reprovados
    int contadorAprovado = 0;//contador para orientar onde colocar o aluno aprovado
    int contadorReprovado = 0;//contador para orientar onde colocar o aluno aprovado

    //Funções para inserir direto os alunos, utilizado apenas para evitar escrever todos um por um
    inserirStruct(&aluno[0], "Arthur", 10, 8);
    inserirStruct(&aluno[1], "Beatriz", 11, 5);
    inserirStruct(&aluno[2], "Carolina", 12, 4);
    inserirStruct(&aluno[3], "Danilo", 13, 3);
    inserirStruct(&aluno[4], "Eduardo", 14, 10);
    inserirStruct(&aluno[5], "Fabricio", 15, 6);
    inserirStruct(&aluno[6], "Gefersson", 16, 2);
    inserirStruct(&aluno[7], "Hipolito", 17, 1);
    inserirStruct(&aluno[8], "Irineu", 18, 0);
    inserirStruct(&aluno[9], "Jonas", 19, 9);
   
   
    
    //Loop para percorrer o vetor de alunos (10 alunos)
    for (int count = 0; count < 10; count++)
    {
        //Se a média final do aluno for maior ou igual a 5 
        if (aluno[count].mediaFinal >= 5)
        {
            //Então ele é colocado no vetor de aprovados na posição 'contadorAprovado' 
            //Que indicará o próximo espaço a ser preenchido com o aluno
            aprovados[contadorAprovado] = aluno[count];
            contadorAprovado++;
        }
        //Se a média final dele for menor que 5
        else
        {
            reprovados[contadorReprovado] = aluno[count];
            contadorReprovado++;
        }
    }

    //Mostrar os aprovados, todos os alunos que estiverem no vetor de alunos 'aprovados'
    printf("\nAprovados:\n");
    for (int count = 0; count < contadorAprovado; count++)
        printf("[ %s, %d, %g ] ", aprovados[count].nome, aprovados[count].matricula, aprovados[count].mediaFinal);
    
    //Mostrar os aprovados, todos os alunos que estiverem no vetor de alunos 'reprovados'
    printf("\nReprovados:\n");
    for (int count = 0; count < contadorAprovado; count++)
        printf("[ %s, %d, %g ] ", reprovados[count].nome, reprovados[count].matricula, reprovados[count].mediaFinal);
    
    return 0;
}
---------------------------------------------------------------------------------
/*12. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores,
considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
jogadores recebeu.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h> 

typedef struct
{
    int valor;
    char naipe[10];
} Carta;

int main()
{

    int i;
    Carta carta[52];
    srand(time(NULL));

    for (i = 0; i < 52; i++){
        carta[i].valor = (i % 13) + 1;
        if (i < 13){
            strcpy(carta[i].naipe, "Ouros");
        }
        else if (i < 26){
            strcpy(carta[i].naipe, "Paus");
        }
        else if (i < 39){
            strcpy(carta[i].naipe, "Copas");
        }
        else if (i < 53){
            strcpy(carta[i].naipe, "Espadas");
        }
    }

    int num;

    printf("\nCartas do Jogador 1: ");
    for (i = 0; i < 3; i++){
        num = rand() % 52;
        printf("\n [%d de %s]", carta[num].valor, carta[num].naipe);
    }

    printf("\nCartas do Jogador 2: ");
    for (i = 0; i < 3; i++){
        num = rand() % 52;
        printf("\n [%d de %s]", carta[num].valor, carta[num].naipe);
    }

    return 0;
}
---------------------------------------------------------------------------------
/*16. Faça um programa que seja uma agenda de compromissos e:
- Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e
data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
- Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o
procedimento até ler M = 0.*/
  
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <string.h> 
  
struct data{ 
     int dia; 
     int mes; 
     int ano; 
 }; 
 struct agenda{ 
     char compromisso[61]; 
     struct data d; 
 }; 
  
 int main(){ 
     struct agenda ag[5]; 
     int i, j, M, A; 
  
     printf("--Entrada de Dados de Compromissos--\n"); 
     for(i = 0; i < 5; i++){ 
         printf("--Digite o %d°compromisso: \n",i + 1); 
         fgets(ag[i].compromisso,61,stdin); 
         fflush(stdin); 
         printf("Digite o dia do compromisso: \n"); 
         scanf("%d",&ag[i].d.dia); 
         fflush(stdin); 
         printf("Digite o mes do compromisso: \n"); 
         scanf("%d",&ag[i].d.mes); 
         fflush(stdin); 
         printf("Digite o ano do compromisso: \n"); 

         scanf("%d",&ag[i].d.ano); 
         fflush(stdin); 
     } 
  
     do{ 
         printf("Digite o mes e ano do compromisso que deseja buscar: \n"); 
         scanf("%d %d",&M, &A); 
         if(M == 0){ 
             system("pause"); 
             return 0; 
         } 
         for(i = 0; i < 5; i++){ 
             if(A == ag[i].d.ano && M == ag[i].d.mes){ 
                 printf("Data do compromisso: %d/%d/%d - ",ag[i].d.dia, ag[i].d.mes, ag[i].d.ano); 
                 printf("Compromisso: "); 
                 for(j = 0; ag[i].compromisso[j] != '\0'; j++){ 

                     printf("%c",ag[i].compromisso[j]); 
                 } 
             } 
         } 
     }while(M != 0); 
     system("pause"); 
     return 0; 
 } 


---------------------------------------------------------------------------------
/*17. Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e:
- Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em
kW) e tempo ativo por dia (real, em horas);
- Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
Apresente este último dado em porcentagem.*/
  
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <string.h> 
  
  struct eletro{ 
     float potencia; 
     char nome[16]; 
     float horas; 

 }; 
  
 int main(){ 
     struct eletro e[5]; 
     int i ,j, t; 
     float consumo[5], constot; 
      
     printf("--Dados de Consumo de Energia--\n"); 
     for(i < 0; i < 5; i++){ 
         printf("Digite o nome do eletrodomestico: \n"); 
         fgets(e[i].nome,16,stdin); 
         fflush(stdin); 
         printf("Digite a potencia do eletrodomestico: \n"); 
         scanf("%f",&e[i].potencia); 
         fflush(stdin); 
         printf("Digite o tempo ativo por dia em horas: \n"); 

         scanf("%f",&e[i].horas); 
         fflush(stdin); 
     } 
     printf("Digite o numero de dias do uso dos eletrodomesticos: \n"); 
     scanf("%d",&t); 
     fflush(stdin); 
     constot = 0; 
     for(i = 0; i < 5; i++){ 
         constot += e[i].potencia * e[i].horas * t; 
     } 
     printf("Consumo total da casa: %f\n",constot); 
     for(i = 0; i < 5; i++){ 
         consumo[i] = (e[i].potencia * e[i].horas * t) / constot; 
         printf("Nome: "); 
         for(j= 0; e[i].nome[j] != '\0'; j++){ 
             printf("%c",e[i].nome[j]); 
         } 

         printf("Consumo em porcentagem: %.2f%%\n",consumo[i]); 
     } 
     system("pause"); 
     return 0; 
 } 
---------------------------------------------------------------------------------
/*18. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos)
e A = 5 (aeroportos) e:
- Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de
origem e um de destino;
- Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
de voos que saem e quantidade de voos que chegam.
Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite
aeroportos de código inexistente.*/
  
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <string.h> 
  
 struct Voo{ 

   int codigo_origem; 
   int codigo_destino; 
 }; 
  
 struct Aeroporto{ 
   int codigo; 
   int voos_saindo; 
   int voos_chegando; 
 }; 
  
 int main(){ 
   struct Voo voos[5]; 
   for (int i = 0; i < 5; i++){ 
     printf("Digite o código do aeroporto de origem do voo %d: ", i + 1); 
     scanf("%d", &voos[i].codigo_origem); 
     printf("Digite o código do aeroporto de destino do voo %d: ", i + 1); 

     scanf("%d", &voos[i].codigo_destino); 
     printf("\n"); 
   } 
  
   struct Aeroporto aeroportos[5]; 

   for (int i = 0; i < 5; i++){ 
     printf("Digite o código do aeroporto %d: ", i + 1); 
     scanf("%d", &aeroportos[i].codigo); 
     aeroportos[i].voos_saindo = 0; 
     aeroportos[i].voos_chegando = 0; 
     printf("\n"); 
   } 
  
   for (int i = 0; i < 5; i++){ 
     for (int j = 0; j < 5; j++){ 
       if (voos[i].codigo_origem == aeroportos[j].codigo){ 
         aeroportos[j].voos_saindo++; 
       } 
       if (voos[i].codigo_destino == aeroportos[j].codigo){ 
         aeroportos[j].voos_chegando++; 
       } 
     } 
   } 
  
   for (int i = 0; i < 5; i++){ 
     printf("Aeroporto %d: %d voos saindo e %d voos chegando\n", aeroportos[i].codigo, aeroportos[i].voos_saindo, aeroportos[i].voos_chegando); 
   } 
  
   return 0; 

 } 
---------------------------------------------------------------------------------
/*20. Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma
data válida, e calcule o número de dias que decorreram entre as duas datas.
struct dma {
int dia;
int mes;
int ano;
};*/
  
 #include <stdio.h> 
 #include <stdlib.h> 
 #include <string.h> 
  
struct dma{ 
   int dia; 
   int mes; 
   int ano; 
 }; 
  

 int main(){ 
   struct dma data1, data2; 
   printf("Digite a primeira data (dd/mm/aaaa):\n"); 
   scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano); 
  
   printf("Digite a segunda data (dd/mm/aaaa):\n"); 
   scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano); 
  
   int dias1 = data1.dia + (data1.mes * 30) + (data1.ano * 365); 
   int dias2 = data2.dia + (data2.mes * 30) + (data2.ano * 365); 
  
   int dias = dias2 - dias1; 
  
   printf("Dias decorridos: %d\n", dias < 0 ? 

dias * -1 : dias); 
  
   return 0; 
 } 
