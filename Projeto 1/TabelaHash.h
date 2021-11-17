#ifndef TABELAHASH_H_INCLUDED
#define TABELAHASH_H_INCLUDED

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;

};

typedef struct hash Hash;

//
Hash* criaHash(int TABLE_SIZE);

void liberaHash(Hash *ha);

int insereHash_SemColisao(Hash*ha,struct aluno al);

int buscaHash_SemColisao(Hash* ha , int mat, struct aluno *ap);

#endif // TABELAHASH_H_INCLUDED
