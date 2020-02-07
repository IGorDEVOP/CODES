#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


struct Pilha {
    int s;
    int First; // entrada na
    int last; //  saida da
    int *itens;
    int len; //  tamanho da pilha
    int i;
    int total;
}Pilha;

struct Pilha CriarPilha(int size) // struct onde se cria a
{
    struct Pilha test;
    test.itens = (int *) calloc(size, sizeof(int));
    test.s = size;
    test.First = 0;
    test.last = 0;
    test.len = 0;
    test.total = 0;
    return test;
}

int isEmpty(struct Pilha *pPilha) // verificar se há espaço ainda no vetor
{
    if (pPilha->total == 0)
        return 1;
    else
        return 0;
};

int isFull(struct Pilha *pPilha) // verifica se o vetor esta cheio
{
    if (pPilha->total == pPilha->s )
        return 1;
    else
        return 0;
};

int push(struct Pilha *pPilha, int valor) // *pPilha inseção de dados
{
     pPilha->itens[pPilha->last] = valor;
     pPilha->len++;
     pPilha->last++;
     pPilha->total++;
};

int pop(struct Pilha *pPilha) // remover dados da Pilha
{
     int poupando = (*pPilha).itens[(*pPilha).First];
     pPilha->itens[pPilha->First] = 0;
     pPilha->First++;
     pPilha->len--;
     pPilha->total--;
     return poupando;
};

int top(struct Pilha *pPilha)
{
    return (*pPilha).itens[(*pPilha).First];
};

void main()
{
    struct Pilha Empilhando = CriarPilha(6);

    push(&Empilhando, 9);
    push(&Empilhando, 2);
    push(&Empilhando, 4);
    push(&Empilhando, 4);
    push(&Empilhando, 4);
    push(&Empilhando, 5);

    printf("Top %d\n", top(&Empilhando));
    printf("isFull %d\n", isFull(&Empilhando));
    printf("isEmpty %d\n", isEmpty(&Empilhando));
    printf("Total %d\n", Empilhando.total);

    printf("%d\n", Empilhando.itens[0]);
    printf("%d\n", Empilhando.itens[1]);
    printf("%d\n", Empilhando.itens[2]);
    printf("%d\n", Empilhando.itens[3]);
    printf("%d\n", Empilhando.itens[4]);
    printf("%d\n", Empilhando.itens[5]);

    printf("pop %d\n", pop(&Empilhando));
    printf("pop %d\n", pop(&Empilhando));
    printf("pop %d\n", pop(&Empilhando));
    printf("pop %d\n", pop(&Empilhando));
    printf("pop %d\n", pop(&Empilhando));
    printf("pop %d\n", pop(&Empilhando));


    setlocale(LC_ALL, "Portuguese");
    return 0;
}
