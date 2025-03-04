#ifndef __COMPLEJOS_H__
#define __COMPLEJOS_H__      
#define TAM 1000
#include <stdbool.h>

typedef float REAL;
typedef float IMAGINARIO;

typedef struct COMPLEJOS {
    REAL real;
    IMAGINARIO imaginario;
} COMPLEJOS;

COMPLEJOS CrearComplejos(REAL real, IMAGINARIO imag);
COMPLEJOS AsignaReal(COMPLEJOS c, REAL real);
COMPLEJOS AsignaImaginario(COMPLEJOS c, IMAGINARIO imag);
REAL ParteReal(COMPLEJOS c);
IMAGINARIO ParteImaginaria(COMPLEJOS c);
REAL Modulo(COMPLEJOS c);
COMPLEJOS Suma(COMPLEJOS c1, COMPLEJOS c2);

#endif
