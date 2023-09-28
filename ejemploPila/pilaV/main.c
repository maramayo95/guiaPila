#include <stdio.h>
#include "pilaV.h"


int main(){
    Pila s; 
    Pila sDos;

    inicializarPila(&s);
    int res = esVacia(&s);
    printf("%d", res);
    return 0;
}