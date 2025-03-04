#include <stdio.h>
#include "conjunto.h"


int main(){
    CONJUNTO c, d, e;
    c = conjunto_vacio();
    d = conjunto_vacio();
    e = conjunto_vacio();
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);

    printf("El conjunto c esta vacio %d\n", es_vacio(c));
    c = agregar(c, 2);
    c = agregar(c, 3);
    c = agregar(c, 19);
    c = agregar(c, 11);
    c = agregar(c, 15);
    print_conjunto(c);
    printf("c\n");

    d = agregar(d, 2);
    d = agregar(d, 22);
    d = agregar(d, 12);
    d = agregar(d, 13);
    d = agregar(d, 16);
    d = agregar(d, 24);
    print_conjunto(d);
    printf("d\n");

    e = Union(c, d);
    print_conjunto(e);
    printf("e\n");


    return 0;
}