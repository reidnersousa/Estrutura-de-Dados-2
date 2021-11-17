
typedef struct retangulo Retangulo;


typedef struct lista Lista;



struct endereco{
    int numeroCasa;
    char quadra[30];
};


struct funcionario{
    char nome[20];
    int idade;
    struct endereco ender;
};
