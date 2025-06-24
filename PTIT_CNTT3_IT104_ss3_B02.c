#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    do {
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    printf("%d\n", max);

    free(arr);
    arr = NULL;

    return 0;
}
