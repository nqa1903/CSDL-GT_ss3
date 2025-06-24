#include <stdio.h>
#include <stdlib.h>

float tinhTrungBinhChan(int *arr, int n) {
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            tong += arr[i];
            dem++;
        }
    }
    if (dem == 0) return 0;
    return (float)tong / dem;
}

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

    float trungBinh = tinhTrungBinhChan(arr, n);
    printf("%.2f\n", trungBinh);

    free(arr);
    arr = NULL;

    return 0;
}
