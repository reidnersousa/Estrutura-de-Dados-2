#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "Bibi.h"
#define N 5

/*
struct_exemplo()
{
    //tipo de variáveis que podemos declarar
    "tipo básico": char,int,float,double;
    int x;
    float f;
    "tipos compostos homogêneos": array
    int v[5];
    char nome[50];
    return 0;

    A linguagem C nos permite tambem criar
    nossos próprios tipos de variáveis.
    um deles é a struct tambem chamada de estrutura
    //%Forma geral
    struct nome struct{
          tipo1 nome1; //Declarações das minhas variáveis
          tipo2 nome2; // que vão ser os campos dessa estrutura
          ...
          tipoN nome N;
    }; //Termenei minhas declarações fecha chave e coloca um ;
    //Preciso desse ponto e virgula depois das chaves
    // isso é declaração de tipo agora ta?
    // tem diferença de escopo

    return 0;

}
*/






















void switch_padrao()
{

    char ch;
    printf("diige");
    scanf("%c",&ch);
    switch(ch)
    {
    case '.':
        printf("pronto \n");
        break;
    case ',':
        printf("virgula \n");
        break;
    case ';':
        printf("pronto e virgula\n");
        break;
    case ':':
        printf("dois ponto  \n");
        break;
    default :  //caso nao seja nehumas das opçoões
        printf("nao e pontuação ");
    }
    system("pause");
    return 0;
}

void case_if()
{
    char ch;
    printf("Digite ");
    scanf("%c",&ch);
    if(ch=='.')
        printf("ponto\n");
    else if(ch==',')
        printf("virgula .\n");
    else if(ch==':')
        printf("dois ponto \n");
    else if(ch==';')
        printf("ponto e virgula\n");
    else
        printf("nao é pontuação\n");
    system("pause");
    return 0;
}



void while_()
{

    int a,b;
    printf("Digite ");
    scanf("%d %d",&a,&b);
    while(a<b)
    {
        a++;
        printf("%d\n",a);
    }
    printf("Fim do programa");

    system("pause");
    return 0;
}


void for_()
{
    int a,b,c;
    printf("Digite 2 int : \n");
    scanf("%d ",&a);
    scanf("%d",&b);
    for(c=a; c<=b&&c>0; c++)     //for(c=a...) ele começa do num A e vai ate o num B ja for(a=c) ele começa do 1 ate B
    {
        printf("%d\n",c);
    }
    printf("Fim do progr");
    return 0;
}

void for_ij()
{
    int i,j;
    for(i=0,j=10; i<j; i++,j--)
    {
        printf("\n i=%d j=%d",i,j);
    }
    return 0;
}

/*
int main()
{
    Comado continue:
    interroper a repetição atual de qualquer
    comado de laço(for,while,o do-while),e
    passa para a proxima repetição

    repetição(condição1){
        if(condição2)
            continue;
    }
    return 0;
}

*/











void break_()
{
    int a,b;
    printf("Digite a");
    scanf("%d",&a);
    printf("Digite b");
    scanf("%d",&b);
    while(a<=b)
    {
        a=a+1;
        if(a==5)
        {
            continue;
            printf("%d\n",a);
        }
    }



    return 0;
}


void got_()
{
    int i,j,k;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            for(k=0; k<5; k++)
            {
                if(i==2&&j==3&&k==1)
                    goto fim;
                else
                    printf("pos %d %d %d ",i,j,k);
            }
        }
    }
fim:
    printf("Fim");
    return 0;
}

/*Array : conjunto de variaveis do
mesmo tipo usando o mesmo nome*/
/*
tipo nome_array[tamanho];

//para guardar a nota de 100 alunos
float notas [100];

return 0;

*/
/*O tamanho de um array deve ser sempre
um valor ou expressão interia e constante */
/*
#define N 100
int n=5;
float F[N+1];//Correto
char texto[30];//Correto
int Vetor[n];//Errado
int V[4.5];//Errado
return 0;
*/


/*a maquina ler da esquerda para direita  << e
e nao da direita para esquerda >> */
void  vetor_notas_correto()
{
    float notas[N], media=0.0,aprov=6.0;
    int i;
    for(i=0; i<N; i++)
    {
        printf("Digite a nota do aluno %d  : \n",i);
        scanf("%f",&notas[i]);
    }
    media=notas[0]+notas[1]+notas[2]+notas[3]+notas[4];
    printf("media pre =%f",media);
    media=media/N;
    printf("media pos =%f",media);
    for(i=0; i<N; i++)
    {
        if(notas[i]>media)
            printf("\n Aluno %d:  notas %2.f",i,notas[i]);

        if(notas[i]>aprov)
            printf("\n Aluno %d aprovado ",i);
    }
    system("pause");;
    return 0;

}
void vetor_notas()
{
    //Cada posição do array é uma variável */
    float notas[100],vetor[100];
    scanf("%d",&notas[5]);//comando de leitura
    notas[0]=10;//comando de atribuição
    notas[1]=notas[5]+notas[0];//expressão
    // notas=vetor;//Errado
    system("pause");
    return 0;
}

void exemplo_matriz()
{
//Array de duas dimensões : matriz
//Forma gerall:

//###tipo nome_array[nro_linhas][nro_colunas];

//Exemplo:
    int mat[3][2];

    int n=5;
    float F[N+1][N];//Correto
    char frase[30][50];//Correto
//# int mat [n] [n];//Errado
//# int M[4.5][5];//Errado

//Acesso aos elementos : Indice
//# int mat [3][2];
    mat[0][0]=5;//primeira posição
    mat[0][1]=23;
    mat[2][1]=-1;//ultima posição


//Acesso aos elementos : indice
//# int mat[3][2];
    int M[3][2];
    scanf("%d",&mat[2][0]);//comando de leitura
    mat[0][0]=10;//comando de atribuição
    mat[1][1]=mat[0][0]+mat[2][0];//expressão
//mat=M;//Errrado

    return 0;
}



void matriz_exemplo()
{
    int mat[2][2];
    int i,j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("digite mat [%d][%d]  : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
        }
    }
    printf("%d",mat[0][0]);// a matriz nao forma olha isso ai ok
    printf("%d",mat[0][1]);
    printf("\n%d",mat[1][0]);
    printf("%d",mat[1][1]);



    return 0;
}
/*
//Array multi explicação
int main(){
// declara array de int com 1 dimensão
int vet[5];
// declara array de float com 2 dimensão
float mat[5][5];
// declara array de double com 3 dimensão
double cub[5][5][5];
// declara array de int com 4 dimensão
int X[5][5][5][5];

return 0;
}
*/
void array_multi()
{


    int cub[2][2][2];// consemer muita memoria tridimisional
    int i,j,k;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<2; k++){
                    //#cub[i][j][k]=0;
                printf("digite cub [%d][%d][%d]  : ",i,j,k);
                scanf("%d",&cub[i][j][k]);
            }
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0;k<2;k++){
            }
        }
    }
    /*
    printf("%d",mat[0][0]);// a matriz nao forma olha isso ai ok
    printf("%d",mat[0][1]);
    printf("\n%d",mat[1][0]);
    printf("%d",mat[1][1]);
     */


    return 0;
}

void array_inici()
{
    //inicializanndo um array com zeos
    int vet[5],i;
    for(i=0;i<5;i++){
        //vet[i]=0;
        scanf("%d",&vet[i]);
    }
    for(i=0;i<5;i++){

        printf("%d",vet[i]);
    }

    return 0;
}


void array_ini_cada()
{
    /*Inicialando um array com
     um valor em cada posiçção */
    int vet[5];
    vet[0]=15;
    vet[1]=12;
    vet[2]=9;
    vet[3]=1;
    vet[4]=35;
    return 0;

}
/*
void nome_arrray()
{
    //%%Podemos definir uma lista de
    valores para coloca no array%//
    //#Forma geral:
    tipo nome_array[tam1]...[tamN]=[valores];
    //#Exemplo:
    int vet[5]={15,12,9,1,35};
    //#inicialiazando um vetor
    float vetor[3]={1.5,22.1,4.56};

    //#incialiazando uma matriz
    int matriz1[2][3]={1,2,3,4,5,6};

    int matriz1[2][3]={{1,2,3},{4,5,6}};

    return 0;
}
*/

void soma_vetor()
{
    //somando os elementos de um array
    int i , lista[5]={1,2,3,4,5};
    int soma=0;// tem que definir o valor 0 para soma pois pode ta errado
    for(i=0;i<5;i++){
        soma=soma+lista[i];
    }
    printf("Soma =%d\n",soma);
}

void soma_matriz()
{
    //somando os elementos de um array
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,soma=0;//soma igual 0 senão da errado
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            soma=soma+mat[i][j]; //&¨&&&& apresenta erro resolve o erro
        }
    }
    printf("Soma =%d\n",soma);
    system("pause");
    return 0;
}

void maior_vetor()
{
    //Maior elemeto de um array
    int i,lista[5]={3,18,2,51,45};// o mesmo raciocinio para numeros negativos
    int maior=lista[0];/* pq nao posso coloca =0
    aqui problema e  se tivesse numeros negativos */
    printf("[0]=%d",lista[0]);
    for(i=1;i<5;i++){
        if(maior<lista[i])
            maior=lista[i];
    }
    printf("maior =%d\n",maior);

    return 0;
}

void maior_matriz()
{
    //maior elemento de um array
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,maior=mat[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(maior<mat[i][j])
                maior=mat[i][j];
        }
    }
    printf("Maior=%d",maior);
    return 0;
}

/*
void  string_(){
 /%String : um array de caracteres
 Permite armazenar uma sequência de caracteres
 adjacente na memoria (palavras ou frases) %/
 //Forma geral:
 char nome_array[tamanho];
 //Exemplo :
 char palavra[20];
 return 0;
}

*/


void string_lendo()
{
    //lendo e escrevendo uma string
    char palavra[20];
    printf("Digite uma palavra");
    scanf("%s",palavra);
    //get(palavra);
    printf("\n Palavra lida : %s",palavra);
    return 0;
}



void string_oi()
{
    //inicializando uma string
    //forma convecional
    char nome1[20]={'J','o','ã','o'};
    printf("nome1 %s\n",nome1);
    //formal especial:
    char nome2[20]="João";
    printf("nome2:%s",nome2);
    return 0;
}
void string_teste()
{
    char palavra[20]="teste";
    printf("Palavra =%s\n",palavra);
    palavra[0]='l';
    printf("\n palvra =%s",palavra);
    return 0;
}

void string_funcao()
{
    /*função do '\0' é desconsiderar
    as posições restantes da string*/
    char palavra[20]="oitenta";
    printf("palavra %s",palavra);

    palavra[2]='\0';
    printf("palavra %s",palavra);
    return 0;
}

void string_strlen(){
// o tamanho de uma string
char palavra[20]="liguagem c";
int tamanho=strlen(palavra);//ela vvai informar os numeros de caracteres digitado e nao o tamanho da srign

printf("Tamanho =%d",tamanho);
return 0;
}
void string_strcpy()
{
    //Copiando uma string
    //cuidado com o tamanho nao posso copia uam string
    // Grande um espaço pequeno
    char palavra[20]="linguagem c";
    char novapalavra[30];
    strcpy(novapalavra,palavra);

    printf("Copia =%s",novapalavra);

    return 0;
}
void string_strcat()
{
    //Copiando uma string
    char palavra1[20]="Bom ";
    char palavra2[30]="dia";
    strcat(palavra1,palavra2);// O conteúdo da palvra dois
    //vai ser colocado no final da palavra um

    //A linguagem C não adiciona espaço entre
    // palavra que são concatenas , por isso coloquei um
    // espaço no final de bom
    printf("palavra =%s",palavra1);
    return 0;
}

void string_strcmp()
{
    char palavra1[20]="linguagem c";
    char palavra2[20]="LINGUAGEM C";

    if(strcmp(palavra1,palavra2)==0){
        printf("string iguais ");
    }
    else{
        printf("string diferentes ");
    }
    return 0;
}
void invertendo_string(){
//Invertido uma string
char str[20]="Linguagem C";
int i;
for(i=strlen(str)-1;i>=0;i--){
    printf("%c",str[i]);
}
printf("\n");
return 0;
}

void invertendo_string_dentro()
{
    char str[20]="Linguagem C";
    char str2[20];
    int i,j=0;
    for(i=strlen(str)-1;i>=0;i--)
    {
        str2[j]=str[i];
        j++;
    }
    str2[j]='\0';
    printf("str2=%s",str2);
}

void invertendo_string_dentro_semvari()
{
    char str[20]="linguagem c";
    char c;
    int i, tam=strlen(str);
    for(i=0;i<tam/2;i++)
    {
        c=str[i];
        str[i]=str[tam-1-i];
        str[tam-1-i]=c;
    }
    printf("str=%s",str);
}

void string_conta_vogais()
{// modelo engessado
    char str[20]="arroz";
    int i,j,total=0,consoantes=0;// começou com o valor zero,por quê??
    //inicialmente, antes de percorrer a string
    // eu não tinha contado nenhuma vogal eu sabiam se existir vogais
    // então eu considero que existem zero vogais.
    int tam1=strlen(str);
    for(i=0;i<tam1;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            total++;
        }

    }
    consoantes=tam1-total;
    printf("nro de vogais =%d  consoantes =%d",total,consoantes);
    return 0;
}


void string_conta_vogais_modelo_rapido()
{
    char str[20]="arroz";
    char vogais[11]="aeiouAEIUO";  //5 vogais minuscula,5maisucla
    //  mais o \0 por isso tem que cooloca 11 e nao 10.
    int i,j,total=0;
    int tam1=strlen(str);
    int tam2=strlen(vogais);

    int consoante=0;
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            if(str[i]==vogais[j]){/* o caracter da posição i for igual a j
                 eu vou contar mais 1 na minha variável total
                bem total começou em zero , não tinha vogal
               Agora eu contei mais um , e se eu encontrei
               uma vogal , eu faço um break por quê?
                porque eu não preciso continuar  executando
                 esse segundo for  eu ja achei uma vogal
                 então se a vogal é o a minusculo eu não preciso comparar
                 com  o restante das vogais break para sair do sengundo for
                e  continua proxima letra da minha primeira string
                entao o que esse código está fazendo ? */
                total++;
                break;
            }
        }
    }
    consoante=tam1-total;
    printf("nro vogais =%d,consoantes=%d",total,consoante);
}
void dowhile_()
{
    /*O comado do while:
     permite executar ,repetidamente e
     AO menos uma vvez , um conjunto  de
     comandos  de acordo com uma condição */
    /*do{
        conjunto de comandos
    }while(condição);
    system("pause");
    return 0;*/
    int i;

    do
    {
        printf("1");
        printf("2");
        printf("3");
        scanf("%d",&i);
    }
    while((i<1)||(i>3));
    printf("opção %d",i);
    return 0;
}
void matriz_while()
{
    int i,j;
    i=1;
    while(i<5)
    {
        j=1;
        while(j<5)
        {
            if(i==j)
            {
                printf("1 ");
            }
            else
                printf("0 ");
            j++;
        }
        printf("\n");
        i++;
    }
}
void matriz_for()
{
    int i,j;
    for(i=1; i<5; i++)
    {
        for(j=1; j<5; j++)
        {
            if(i==j)
            {
                printf("1 ");
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}


void emote()
{
    char c;
    int b=1,i;
    c=b;
    printf("   ");
    for(i=1; i<=3; i++)
    {
        printf("%c",c);
    }
}

void finalizar()
{
    system("cls");
    system("color 2E");
    saidastr("\n\n #################### FIM ####################\n\n");
}



void inicializar()
{

    setlocale(LC_ALL, "Portuguese");
    system("cls"); // system("clear"); linux
    system("color 0");
    //saidastr("#################### Exemplo Notas Alunos ####################\n\n\n");
}


void saidastr(char *mensagem)
{
    printf("%s", mensagem);
}

void saidafloat(char *mensagem, float valor)
{
    printf("%s%.2f", mensagem, valor);
}

char *entradastr(char *mensagem)
{
    char *v = (char *) malloc((sizeof(char) * sizeof(v)));
    printf("%s", mensagem);
    gets(v);
    return v;
}

float entradafloat(char *mensagem)
{
    float n;
    printf("%s", mensagem);
    scanf("%f", &n);
    return n;
}
