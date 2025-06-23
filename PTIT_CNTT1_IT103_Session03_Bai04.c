#include <stdio.h>
#include <stdlib.h>
void nhapMang(int *arr,int dong, int cot) {
    for (int i=0;i<dong;i++) {
        for (int j=0;j<cot;j++) {
            printf("nhap arr[%d][%d]:",i,j);
            scanf("%d",&arr[i*cot+j]);
        }
    }
}
int timMax(int *arr, int dong, int cot) {
    int max = arr[0];
    for (int i=0;i<dong*cot;i++) {
            if (arr[i] > max) {
                max = arr[i];
        }
    }
    return max;
}
int timMin(int *arr, int dong, int cot) {
    int min=arr[0];
    for (int i=0;i<dong*cot;i++) {
            if (arr[i]<min) {
                min = arr[i];
            }
    }
    return min;
}
int main(void) {
    int dong,cot;
int *arr;
    printf("nhap so dong: ");
    scanf("%d",&dong);
    printf("nhap so cot: ");
    scanf("%d",&cot);
    if (dong<=0&&cot<=0) {
        printf("so dong va so cot khong hop le");
    }else if (dong<=0){
        printf("so dong khong hop le");
    }else if (cot<=0) {
        printf("so cot khong hop le");
    }

        arr=(int *)malloc(dong*cot*sizeof(int));
        if (arr==NULL) {
            printf("cap phat bo nho dong khong thanh cong\n");
            return 1;
        }
    nhapMang(arr,dong,cot);
        int max=timMax(arr,dong,cot);
        int min=timMin(arr,dong,cot);
        printf("max:%d,min:%d\n",max,min);

    return 0;
}