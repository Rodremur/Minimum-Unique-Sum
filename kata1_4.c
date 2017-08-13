/*-------------------------------------------------------
 * Tarea de Programación Avanzada: Kata 1
 * Fecha: 18-08-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */

#include <stdlib.h>
#include <stdio.h>
/*-------------------------------------------------------
 * Tarea de Programación Avanzada: Kata 1
 * Fecha: 24-08-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
/*
 * Complete the function below.
 * http://burningmath.blogspot.mx/2013/09/how-to-check-if-number-is-perfect-square.html
 * http://codereview.stackexchange.com/questions/32751/counting-perfect-squares
 */

int* getMinimumUniqueSum(int arr_size, char** arr, int* result_size) {
    int a, b, i, j;
    int n;
    double root;
    int *res;

    *result_size = arr_size;
    n = arr_size;
    res = (int *)malloc(sizeof(int)*arr_size);
    for(i = 0; i<n; i++) {
        a = atoi(arr[i]);
        j = 0;
        while(arr[i][j++] != ' ');
        b = atoi(&arr[i][j]);
        int rootA = (int)sqrt((double)a);
        int rootB = (int)sqrt((double)b);
        res[i] = rootB-rootA;
        if (a == rootA * rootA) res[i]++;
    }
    return res;
}
