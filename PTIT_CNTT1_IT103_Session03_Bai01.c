#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr;
    printf("nhap so luong phan tu cua mang");
    scanf("%d", &n);
    if (n<=0) {
        printf("so luong phan tu khong duoc am hoac bang khong");
    }
    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL) {
        printf("cap phat bo nho dong khong thanh cong");
        return 1;
    }
    for(int i=0;i<n;i++) {
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        printf("arr[%d] = %d \n",i,arr[i]);
    }
    return 0;
}