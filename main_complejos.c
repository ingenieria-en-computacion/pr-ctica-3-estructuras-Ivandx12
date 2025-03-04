#include <stdio.h>
#include "complejos.h"

int main() {
    COMPLEJOS c1 = CrearComplejos(3, 4);  // c1 = 3 + 4i
    COMPLEJOS c2 = CrearComplejos(1, 2);  // c2 = 1 + 2i

    printf("Numero complejo 1: %.2f + %.2fi\n", ParteReal(c1), ParteImaginaria(c1));
    printf("Numero complejo 2: %.2f + %.2fi\n", ParteReal(c2), ParteImaginaria(c2));

    COMPLEJOS suma = Suma(c1, c2);
    printf("Suma: %.2f + %.2fi\n", ParteReal(suma), ParteImaginaria(suma));

    printf("Modulo de c1: %.2f\n", Modulo(c1));
    printf("Modulo de c2: %.2f\n", Modulo(c2));

    c1 = AsignaReal(c1, 5);
    c1 = AsignaImaginario(c1, 6);
    printf("Nuevo c1: %.2f + %.2fi\n", ParteReal(c1), ParteImaginaria(c1));

    return 0;
}