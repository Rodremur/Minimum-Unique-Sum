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
        res[i] = 0;
        for(; a<=b; a++) {
            int lastdigit = a % 10;
            if (lastdigit != 2 && lastdigit != 3 && lastdigit != 7 && lastdigit != 8) {
                int digroot;
                if (a > 9) {
                    digroot = 1+((a-1)%9);
                } else {
                    digroot = a;
                }
                if(digroot == 1 || digroot == 4 || digroot == 7 || digroot == 9) {
                    if (a > 9) {
                        int plastdigit;
                        switch(lastdigit) {
                            case 6:
                                plastdigit = a % 100;
                                if (plastdigit%2 != 0) {
                                    root = sqrt((double)a);
                                    if((root - (int)root) == 0.0) res[i]++;
                                }
                                break;
                            case 5:
                                plastdigit = a % 100;
                                if (plastdigit == 2) {
                                    root = sqrt((double)a);
                                    if((root - (int)root) == 0.0) res[i]++;
                                }
                                break;
                            default:
                                plastdigit = a % 100;
                                if (plastdigit%2 == 0) {
                                    root = sqrt((double)a);
                                    if((root - (int)root) == 0.0) res[i]++;
                                }
                                break;
                        }
                    } else {
                        if (a == 4 || a == 9) res[i]++;
                    }
                }
            }
        }
    }
    return res;
}
