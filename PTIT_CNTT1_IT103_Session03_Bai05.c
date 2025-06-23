#include <stdio.h>
#include <stdlib.h>
void nhapMang(int *arr,int dong, int cot){
    for(int i=0;i<dong;i++) {
        for (int j=0;j<cot;j++) {
            printf("arr[%d][%d]",i,j);
            scanf("%d",&arr[i*cot+j]);
        }
    }

}
int tongCheoChinh(int *arr,int n) {
    int total=0;;
    for(int i=0;i<n;i++) {
        total+=arr[i*n+i];
    }
    return total;

}
int tongCheoPhu(int *arr,int n) {
    int total=0;
    for(int i=0;i<n;i++) {
        total+=arr[i*n+(n-i-1)];
    }
    return total;
}
int main() {
    int *arr;
    int dong,cot;
    printf("nhap so dong");
    scanf("%d",&dong);
    if (dong <=0|| dong>1000) {
        printf(" error");
    }
    printf("nhap so cot");
    scanf("%d",&cot);
    if (cot <=0|| cot>1000) {
        printf(" error");
    }
    if (dong != cot) {
        printf("khong ton tai duong cheo ");
        return 0;
    }
    arr=(int *)malloc(cot*dong*sizeof(int));
    if (arr==NULL) {
        printf("malloc error");
    }
    nhapMang(arr,dong,cot);
    int cheoChinh = tongCheoChinh(arr,dong);
    int cheoPhu = tongCheoPhu(arr,dong);
    printf("tong duong cheo chinh la: %d \n",cheoChinh);
    printf("tong duong cheo phu la: %d", cheoPhu);
    return 0;
}