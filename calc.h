





/**Pilha com lista  **/

struct no_cal
{
    float info;
    struct no_cal* prox;
};
typedef struct no_cal No_cal;

typedef struct pilha_cal Pilha_cal;
struct pilha_cal
{
    No_cal* prim;
};

/**Fim da pilha com lista **/


/* Arquivo que define a interface da calculadora */
typedef struct calc Calc;
/* funções exportadas */
Calc* cria_calc (char* f);
void operando (Calc* c, float v);
void operador (Calc* c, char op);
void libera_calc (Calc* c);

struct calc
{
    char f[21]; /* formato para impressão */
    Pilha_cal* p; /* pilha de operandos */
};


