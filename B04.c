#include <stdio.h>
#include <stdlib.h>

int timMax(int **arr, int rows, int cols) {
    int max = arr[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (arr[i][j] > max)
                max = arr[i][j];
    return max;
}

int timMin(int **arr, int rows, int cols) {
    int min = arr[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (arr[i][j] < min)
                min = arr[i][j];
    return min;
}

int main() {
    int rows, cols;
    do {
        scanf("%d%d", &rows, &cols);
    } while (rows <= 0 || rows >= 1000 || cols <= 0 || cols >= 1000);

    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
        arr[i] = (int *)malloc(cols * sizeof(int));

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    int max = timMax(arr, rows, cols);
    int min = timMin(arr, rows, cols);

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    for (int i = 0; i < rows; i++)
        free(arr[i]);
    free(arr);
    arr = NULL;

    return 0;
}
