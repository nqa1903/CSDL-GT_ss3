#include <stdio.h>
#include <stdlib.h>

int tongHangK(int **arr, int cols, int k) {
    int tong = 0;
    for (int j = 0; j < cols; j++)
        tong += arr[k][j];
    return tong;
}

int main() {
    int rows, cols, k;
    do {
        scanf("%d%d", &rows, &cols);
    } while (rows <= 0 || rows >= 1000 || cols <= 0 || cols >= 1000);

    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
        arr[i] = (int *)malloc(cols * sizeof(int));

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    do {
        scanf("%d", &k);
    } while (k < 0 || k >= rows);

    int tong = tongHangK(arr, cols, k);
    printf("%d\n", tong);

    for (int i = 0; i < rows; i++)
        free(arr[i]);
    free(arr);
    arr = NULL;

    return 0;
}
