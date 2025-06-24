#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;

    printf("Nhap so luong phan tu cua mang (0 < n < 1000): ");
    scanf("%d", &n);

    if (n >= 1000) {
        printf("Gia tri n khong hop le!\n");
        return 1;
    }else if (n == 0)
    {
        printf("So luong phan tu phai lon hon 0");
        return 1;
    }else if (n < 0)
    {
        printf("So luong phan tu khong duoc am");
        return 1;
    }

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Khong the cap phat bo nho \n");
        return 1;
    }

    for (int i = 0 ; i < n ; i++)
    {
        printf("Nhap phan tu thu %d : " , i + 1);
        scanf("%d" , &arr[i]);
    }

    printf("Mang vua moi nhap : \n");
    for (int i = 0 ; i < n ; i++)
    {
        printf("%d ",arr[i]);
    }

    free(arr);
    return 0;
}
