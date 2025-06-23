#include <stdio.h>
#include <stdlib.h>
int main (void){
int dong,cot;
int *arr;
int value;
printf("nhap so dong: ");
scanf("%d", &dong);
if(dong<=0||dong >1000){
printf("so dong khon hop le ");
return 0;
}
printf("nhap so cot: ");
scanf("%d", &cot);
if(cot<=0||cot >1000){
printf("so cot khong hop le ");
return 0;
}
arr = (int*)malloc(dong*cot*sizeof(int));
if(arr == NULL){
printf("Memory allocation error");
return 1;
}
for (int i = 0; i < dong; i++) {
for (int j = 0; j < cot; j++) {
printf("arr[%d][%d] =  ", i, j);
scanf("%d", &arr[i*cot+j]);
}}
int sum = 0;
printf(" nhap dong ma ban muon tinh tong");
scanf("%d", &value);
for (int i = 0; i < dong; i++) {
    if(value == i){
        for (int j = 0; j < cot; j++) {
            sum += arr[value*cot+j];}
    }
}
printf("sum = %d\n", sum);
return 0;
}