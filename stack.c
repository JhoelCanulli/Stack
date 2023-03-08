#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

/* allocazione di memoria dinamica col puntatore */
stack crea_stack(int h){
  struct st* appoggio = (struct st*) malloc (sizeof(struct st)); //creo una variabile di appoggio che alloca memoria dalla struct
  appoggio->top = -1;     //stack vuoto inizialmente
  appoggio->altezza = h;  //collego l'input della funzione alla variabile nella struct
  appoggio->cella = (int*) calloc(h, sizeof(int)); //creo uno spazio in memoria per la cella in cui verranno scritte cose

  return appoggio;
}

/* raddoppia lo stack e inserisce un elemento in top */
void push(stack s, int v){
  if(s->top == s->altezza-1){

    s->altezza = s->altezza*2;
    s->cella = (int*) realloc(s->cella,s->altezza*sizeof(int));
  }
  s->top = s->top+1;
  s->cella[s->top] = v; //metto nella cella in top il valore da pushare
}
/* toglie l'elemento in top dallo stack */
void pop(stack s){
  if(s->top == -1){
    printf("errore di underflow durante un pop\n");
    exit(1);
  }else
    s->top = s->top-1;
  }
/* stampa a video lo stack */
void stampa_stack(stack s){
  for(int i=0; i<(s->top+1); i++){
    printf("[%d]\n",s->cella[i]);
  }
}
/* libera lo spazio di memoria in cui è presente lo stack */
void clear(stack s){
  free(s->cella);   //rimuovo le celle
  free(s);          //rimuovo lo stack
}
