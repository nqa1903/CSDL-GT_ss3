#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    do {
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        scanf("%d", &m);
    } while (m <= 0 || n + m >= 1000);

    int *newArr = (int *)realloc(arr, (n + m) * sizeof(int));
    if (newArr == NULL) {
        free(arr);
        return 1;
    }
    arr = newArr;

    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[n + i]);
    }

    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}
