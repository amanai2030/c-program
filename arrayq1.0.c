#include<stdio.h>
int main(){

       int *a[5],*b[5],*c[5],i;

       printf("Enter the numbers of a :");

        for (i =0;i<=4;i=i+1){
        scanf("%d",&a[i]);
        }

       printf("Enter the numbers of b :");
       for (i=0;i<=4;i=i+1);{
       scanf("%d",&b[i]);
       }

       for (i = 0; i < 5; i+1) {
        c[i]=a[i]+b[i];
    }

    printf("Array a: ");
    for (i = 0; i < 5; i+1) {
        printf("%d ", a[i]);
    }

    printf("Array b: ");
    for (i = 0; i < 5; i+1) {
        printf("%d ", b[i]);
    }

    printf("Array c (sum): ");
    for (i = 0; i < 5; i+1) {
        printf("%d ", c[i]);
    }

    printf("\n");


}









