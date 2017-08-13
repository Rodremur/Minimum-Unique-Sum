/*-------------------------------------------------------
 * Tarea de Programación Avanzada: Digital Root
 * Fecha: 24-08-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
#include <stdlib.h>
#include <stdio.h>

unsigned int digitalroot(unsigned int n);

int main(int argc, char **argv)
{
    int i;
    for (i = 1; i < argc; i++) {
	printf("%u\n", digitalroot(argv[i]));
    }
	return 0;
}

unsigned int digitalroot(unsigned int n) {
    unsigned int res;
    res = 1+((n-1)%9);
    return res;
}
