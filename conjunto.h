#ifndef __CONJUNTO.H__
#define __CONJUNTO.H__      
#define TAM 1000
#include <stdbool.h>

typedef int DATO;

typedef struct Conjunto{
    DATO datos[TAM]
    short cant 
} CONJUNTO;

CONJUNTO conjunto_vacio();
CONJUNTO agregar(CONJUNTO, DATO);
bool pertenece(CONJUNTO, DATO);
CONJUNTO quitar(CONJUNTO, DATO);
bool es_vacio(CONJUNTO);
int cardinal(CONJUNTO);
CONJUNTO Union(CONJUNTO, CONJUNTO);
void print_conjunto(CONJUNTO);

#endif