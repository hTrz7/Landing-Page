#include <stdio.h>
#include <stdlib.h>
 
#define MAX 100
 
typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p) {
    p->topo = -1;
}
int esta_vazia(Pilha *p) {
    return p->topo == -1;
}
 
int esta_cheia(Pilha *p) {
    return p->topo == MAX - 1;
}
void push(Pilha *p, int valor) {
    if (esta_cheia(p)) {
        printf("Pilha cheia!\n");
        return;
    }
    p->topo++;
    p->dados[p->topo] = valor;
}
 
int pop(Pilha *p) {
    if (esta_vazia(p)) {
        printf("Pilha vazia!\n");
        return -1;
    }
    return p->dados[p->topo--];
}

int topo(Pilha *p){
    return p->dados[p->topo];
}

void buscaPilha(Pilha *p, int valor){
    for(int i = p->topo; i >= -1; i--){
        if(p->dados[i] == valor){
            printf("Elemento %d encontrado\n", p->dados[i]);
        }
    }
}

int main() {
    Pilha p;
    inicializar(&p);
 
    push(&p, 10);
    push(&p, 20);
    push(&p, 30);

    printf("Topo: %d\n", topo(&p));  // 30
    printf("Removido: %d\n", pop(&p));  // 30
    printf("Topo: %d\n", topo(&p));  // 20
    buscaPilha(&p, 10);

    return 0;
}