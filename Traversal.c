#include<stdio.h>
int main(){
    int a[50],size,i;
    printf("Enter size of an array\n");
    scanf("%d",& size);
    printf("Enter the array elements\n");
    for( i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Elements of array are :");
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
}

// #include<stdio.h>
// int main(){
//     int a[50],size,i;
//     printf("Enter size of an array");
//     scanf("%d",&a);
//     print("%d",&size);
//     printf("enter the array list");
//     for(i=0;i<size;i++){
//         scanf("%d",a[i]);
//     }
// }