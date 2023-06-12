#include<stdio.h>
int main(){
    int a[50],size,i,num,pos;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter elements of array\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=size-1;i<=0;i--){
        a[i+1]=a[i];
    }
    a[0]=num;
    size++;
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    
}