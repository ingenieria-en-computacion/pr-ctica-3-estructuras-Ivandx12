#include "complejos.h"
#include <math.h>

COMPLEJOS CrearComplejos(REAL real, IMAGINARIO imaginario) {
    COMPLEJOS c;
    c.real = real;
    c.imaginario = imaginario;
    return c;
}

COMPLEJOS AsignaReal(COMPLEJOS c, REAL real) {
    c.real = real;
    return c;
}

COMPLEJOS AsignaImaginario(COMPLEJOS c, IMAGINARIO imaginario) {
    c.imaginario = imaginario;
    return c;
}

REAL ParteReal(COMPLEJOS c) {
    return c.real;
}

IMAGINARIO ParteImaginaria(COMPLEJOS c) {
    return c.imaginario;
}

REAL Modulo(COMPLEJOS c) {
    return sqrt(c.real * c.real + c.imaginario * c.imaginario);
}

COMPLEJOS Suma(COMPLEJOS c1, COMPLEJOS c2) {
    COMPLEJOS resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

