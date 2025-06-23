#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr;
    int avg;
    int total;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation error");
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        total+=arr[i];
    }
    avg = total / n;
    printf("Average = %d\n", avg);
    return 0;
}
