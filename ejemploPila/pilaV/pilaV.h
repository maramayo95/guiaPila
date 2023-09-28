#ifndef STACK
#define STACK
#define lleno 100

typedef struct 
{
    int v[100];
    int tope;
}Pila;

void inicializarPila(Pila *p){
    p->tope = -1;
}

int esVacia(Pila *p){
    return p->tope == -1;
}

int esLlena(Pila *p){
    return p->tope == lleno;
}

void apilarElemento(Pila *p, int n){
    // Pregunto si el vector esta lleno 
    if(!esLlena(p)){
        p->v[p->tope++] = n;
    }
}

void desapilarElemento(Pila *p){
    if(!esVacia(p)){
       (p->tope--);
    }
}

int verTope(Pila *p){
    return p->tope;
}


//  aux->tope++;
//         // Al vector auxiliar se le agregue el valor del vector original
//         aux->v[aux->tope] = p->v[p->tope]; 

#endif // !1

