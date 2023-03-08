#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

  /* creo una variabile stack */
  stack pila = crea_stack(4);

  printf("\n");
  printf("ESEGUO UN PUSH DA 1 A 10: \n");
  for(int i=0; i<11; i++){
    push(pila,i);
  }
  stampa_stack(pila);
  printf("\n");
  printf("ESEGUO UN POP DA 10 A 7: \n");
  for(int i=0; i<3; i++){
    pop(pila);
  }
  stampa_stack(pila);
  printf("\n");
  printf("SVUOTO LO STACK...\n");
  clear(pila);
  printf("STACK VUOTO!\n\n\n");

  return 0;

}