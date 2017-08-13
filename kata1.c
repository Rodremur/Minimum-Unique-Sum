/*-------------------------------------------------------
 * Tarea de Programación Avanzada: Kata 1
 * Fecha: 18-08-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
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
            root = sqrt((double)a);
            if((root - (int)root) == 0.0) res[i]++;
        }
    }
    return res;
}
