#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
int *arr;
printf("Enter number of elements: ");
scanf("%d", &n);
arr = (int *)malloc(n * sizeof(int));
if (arr == NULL) {
printf("Memory allocation error");
return 1;}
for (int i = 0; i < n; i++) {
printf("Enter number %d: ", i + 1);
scanf("%d", &arr[i]);}
int m;
printf("Nhap so phan tu muon them: ");
scanf("%d", &m);
int *newArr = (int *)realloc(arr,(n+m)* sizeof(int));
if (newArr == NULL) {
printf("Memory allocation error");
return 1;}
arr = newArr;
for (int i = n; i <n+m; i++) {
printf(" nhap phan tu thu %d ",i);
scanf("%d", &arr[i]);
}
printf("mang sau khi them");
for (int i = 0; i < n+m; i++) {
printf(" %d \t", arr[i]);

}
free(arr);

    return 0;
}