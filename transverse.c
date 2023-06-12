#include<stdio.h>
int main(){
    int a[5],size,i;
    printf("Enter the values of array\n");
    scanf("%d",&size);
    printf("Enter elements of array:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements in array are : ");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }

}