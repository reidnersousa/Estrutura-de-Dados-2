#include <stdio.h>
#include <stdlib.h>





/*
1. O programa abaixo implementa duas funções para multiplicar dois números, sendo uma iterativa e outra recursiva.
 Analise as duas chamadas no programa principal e informe passo a passo o resultado obtido em cada uma.
*/

long int mult(int x, int y){

    long int res=0;   //define o res=0

    while( y != 0){ // enquanto y for diferente de 0 executa o while

           res += x; // res recebe valor de x

           y--;  //  y diminuir

   }

   return(res);   // retorna res

}

long int multRec(int x, int y) {

       if (y == 0)// se o y for 0 retorn 0

            return 0;

       else //caso contrario executa else

           return(x + multRec(x, y-1));//

}











/*
2. Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci.
 Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
*/




int
maximo (int i, int n, int v[])
{
   if (i == n-1) return v[i];
   else {
      int x;
      x = maximo (i + 1, n, v);
      if (x > v[i]) return x;
      else return v[i];
   }
}




int factorial(int n)

{

    if(n==1)
        return 1;
    else

        return(n*factorial(n-1));
}


int soma_num(int num)
{
    int resultado;
    if (num == 1)
    {
        return (1);
    }
    else
    {
        resultado = num + soma_num(num - 1);
    }
    return (resultado);
}

int num_digitos(int n1)
{
    static int cont=0;

    if(n1!=0)
    {
        cont++;
        num_digitos(n1/10);
    }

    return cont;
}


int mdc(int num1, int num2)
{
    if(num2 != 0)
        return mdc(num2, num1%num2);
    else
        return num1;
}



#include<stdio.h>
#define MAX 75

char* Inversao(char str1[])
{
    static int i=0;
    static char str_inv[MAX];
    if(*str1)
    {
        Inversao(str1+1);
        str_inv[i++] = *str1;
    }
    return (str_inv);
}



/*
2. Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci.
 Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
*/


int fibo(int n)
{
    if(n==0||n==1)
        return n;
    else
    return fibo(n-1)+fibo(n-2);
}


int decimal_para_binario(int decimal)
{

    int pot2,binario;
    binario=0;
    pot2=1;
    while(decimal !=0){
        binario=binario+decimal % 2*pot2;
        decimal=decimal/2;
        pot2=pot2*10;
    }
    printf("%d\n",binario);
    return 0;

}


/*7.  Dado um número n na base decimal, escreva uma função recursiva em C que converte este número para binário.*/
int decimal_para_binario_recursiva( int decimal  )  //3=11
{
  if(decimal/2 !=0){
    decimal_para_binario_recursiva(decimal/2);
  }

  printf("%d",decimal % 2);
}

int binario_para_decimal_recursiva (int binario)
{
    if(binario/2 !=0){
        binario_para_decimal_recursiva(binario/2);
    }
    printf("\n%d",binario%2);
}



//soma
int soma_recursivida(n)
{
    if(n==0)
        return 0;
    else

        return n+ soma_recursivida(n-1);

}

int soma_recursivida_par(n)
{
    if(n==0)
        return 0;
    else
        return n/2+ soma_recursivida_par(n-1); //1-n+soma_recursivida(n-2)

}


/*
4 Escreva uma função recursiva para calcular o produto de dois números a * b, considerando:

a * b = a , se b = 1
a * b = a * ( b - 1 ) + a, se b > 1
*/

int produto_re(int a ,int b)
{
    if(b==1)
        return b=a;
        /*
        a * b = a , se b = 1
        a * b = a * ( b - 1 ) + a, se b > 1
        */

    if(b>1)
        return a*(b-1)+a;

}

int potencia(int base, int expoente)
{

    if(expoente == 0)

        return 1;

    else

        return (base * potencia(base, expoente-1));

}

int transforma (int binario )
{
    int pot2,decimal;
    decimal=0;
    pot2=1;
    while(binario !=0){
        decimal=decimal+binario % 10*pot2;
        binario=binario/10;
        pot2=pot2*2;
    }
    printf("%d\n",decimal);
    return 0;
}


/*
int binario_para_deci (int binario )
{
    int pot2,decimal;
    decimal=0;
    pot2=1;
    while(binario !=0){
        decimal=decimal+binario % 10*pot2;
        binario=binario/10;
        pot2=pot2*2;
    }
    printf("%d\n",decimal);
    return 0;
}

*/







/*
5. Faça uma função recursiva que permita somar os elementos de um vetor de inteiros. */

//int recursiva_soma_de_um_vetor(int v1[] ){ }







int soma_vetor_recursividade(int vetor[], int soma, int tamanho_vetor, int contador){
    if(contador<tamanho_vetor){
        return soma_vetor_recursividade(vetor, soma+vetor[contador], tamanho_vetor, contador+1); }

    return soma;}







