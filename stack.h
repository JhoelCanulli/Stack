#ifndef _STACK_H
#define _STACK_H

typedef struct st{
  int top;
  int altezza;
  int* cella;
}st;

typedef struct st* stack;

/* DICHIARAZIONI FUNZIONI */
stack crea_stack(int h);
void push(stack s, int v);
void pop(stack s);
void stampa_stack(stack s);
void clear(stack s);


#endif
