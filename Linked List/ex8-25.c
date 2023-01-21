#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int num;
  struct node *prox;
} Node;

void iniciarLista(Node *lista){
  lista->prox = NULL;
}

void inserir_inicio(Node **lista, int num){
  Node *novoElemento = (Node *) malloc(sizeof(Node));

  if(novoElemento){
    novoElemento->prox = *lista;
    novoElemento->num = num;
    *lista = novoElemento;
  }else{
    printf("Nao foi possivel alocar memoria");
  }
}

void inserir_final(Node **lista, int num){
  Node *aux, *novoElemento = (Node *) malloc(sizeof(Node));
  if(novoElemento){
    novoElemento->num = num;
    novoElemento->prox = NULL;

    // é o primeiro
    if(*lista == NULL){
      *lista = novoElemento;
    }else{
      aux = *lista;
      while(aux->prox != NULL){
        aux = aux->prox;
      }

      aux->prox = novoElemento;
    }
  }else{
    printf("Nao foi possivel alocar memoria");
  }
}

void inserir_no_meio(Node **lista, int num, int posicao){
  
}

void display_lista(Node **lista){
  Node *aux = *lista;
  while(aux){
    printf("%d->", aux->num);
    aux = aux->prox;
  }
}

int main(){
  Node *lista = NULL;
  inserir_inicio(&lista, 2);
  inserir_inicio(&lista, 32);
  inserir_inicio(&lista, 12);
  inserir_final(&lista,23);
  inserir_no_meio(&lista,25,4);
  display_lista(&lista);

  return 0;
}