#include <stdio.h>
#include <stdlib.h>

int tongCheoChinh(int **arr, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++)
        tong += arr[i][i];
    return tong;
}

int tongCheoPhu(int **arr, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++)
        tong += arr[i][n - i - 1];
    return tong;
}

int main() {
    int n;
    do {
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);

    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        arr[i] = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int cheoChinh = tongCheoChinh(arr, n);
    int cheoPhu = tongCheoPhu(arr, n);

    printf("Tong duong cheo chinh: %d\n", cheoChinh);
    printf("Tong duong cheo phu: %d\n", cheoPhu);

    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);
    arr = NULL;

    return 0;
}
