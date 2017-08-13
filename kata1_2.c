/*-------------------------------------------------------
 * Tarea de Programación Avanzada: Kata 1
 * Fecha: 18-08-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */

#include <stdlib.h>
#include <stdio.h>
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
                int digroot = 1+((a-1)%9);
                if(digroot == 0 || digroot == 1 || digroot == 4 || digroot == 7) {
                    root = sqrt((double)a);
                    if((root - (int)root) == 0.0) res[i]++;
                }
            }
        }
    }
    return res;
}

int main() {
    int res_size;
    int* res;

    int _arr_size = 0;
    int _arr_i;
    scanf("%d\n", &_arr_size);
    char* _arr[_arr_size];
    for(_arr_i = 0; _arr_i < _arr_size; _arr_i++) {
        char* _arr_item;
        _arr_item = (char *)malloc(512000 * sizeof(char));
        scanf("\n%[^\n]",_arr_item);

        _arr[_arr_i] = _arr_item;
    }

    res = getMinimumUniqueSum(_arr_size, _arr, &res_size);
    int res_i;
    for(res_i=0; res_i < res_size; res_i++) {

        printf("%d\n", res[res_i]);

    }
    return 0;
}
