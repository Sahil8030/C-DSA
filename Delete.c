#include<stdio.h>
int main(){
    int a[50],size,i,num,pos,item;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter elements of array\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position you want to delete\n");
    scanf("%d",&pos);
    if(pos<=0||pos>size){
        printf("INVALID");
    }
    else{
        item = a[pos-1];
        for(int i=pos-1;i<size-1;i++){
            a[i]=a[i+1];

        }
        size--;
        for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    }
}


// #include<stdio.h>
// int main(){
//     int pos,a[50],size;
//     printf("Enter the size of the array");
//     scanf("%d",&a[i]);
//     printf("Enter the array");
//     for(int i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }

//     printf("Enter tje postition of the number");
//     scanf("%d",&pos);
//     if(pos)

// }