// #include<stdio.h>
// int main(){
//     int a[50],i,size,item,pos;
//     printf("Enter the size of the array");
//     scanf("%d",&size);
//     printf("Enter the array list");
//     for(int i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the position you want to delete\n");
//     scanf("%d",&pos);
//     if(pos<0||pos>size){
//         printf("INVALID");
//     }
//     else{
//         item = a[pos-1];
//         for(int i=0;i>size-1;i++){
//             scanf("%d",&a[i]);
//         }
//         size--;
//         for(int i=0;i<size;i++){
//             printf("%d",a[i]);
//         }
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[50],size,i,num,pos,item;
//     printf("Enter the size of an array\n");
//     scanf("%d",&size);
//     printf("Enter elements of array\n");
//     for(i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the position you want to delete\n");
//     scanf("%d",&pos);
//     if(pos<=0||pos>size){
//         printf("INVALID");
//     }
//     else{
//         item = a[pos-1];
//         for(int i=pos-1;i<size-1;i++){
//             a[i]=a[i+1];

//         }
//         size--;
//         for(i=0;i<size;i++){
//         printf("%d",a[i]);
//     }
//     }
// }

// #include<stdio.h>
// int main(){
//     int a[50],i,size;
//     printf("Enter the size of thr array");
//     scanf("%d",&size);
//     printf("Enter the array list");
//     for(int i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }

//     printf("Enter the list of array");
//     for(int i=0;i<size;i++){
//         printf("%d",a[i]);
//     }
// }


// #include<stdio.h>
// int main(){
//     int a[50],size,i,num,pos;
//     printf("Enter the size of an array\n");
//     scanf("%d",&size);
//     printf("Enter elements of array\n");
//     for(i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the number you want to insert\n");
//     scanf("%d",&num);
//     printf("Enter position\n");
//     scanf("%d",&pos);
//     for(i=size-1;i>=pos-1;i--){
//         a[i+1]=a[i];
//     }
//     a[pos-1]=num;
//     size++;
//     for(i=0;i<size;i++){
//         printf("%d",a[i]);
//     }

// }

// #include<stdio.h>
// int main(){
//     int a[50],pos,i,num,size;
//     printf("Enter the size of array");
//     scanf("%d",&a[i]);
//     printf("Enter the size of array");
//     for(int i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }

//     printf("Enter the number you want to insert");
//     scanf("%d",&num);
//     printf("Enter the position you want to insert");
//     scanf("%d",&pos);
//     for(int i=size-1;i>=pos-1;i++){
//         a[i+1] = a[i];
//     }
//     a[pos-1]=num;
//     size++;
//     for(i=0;i<size;i++){
//         print("%d",a[i]);
//     }
// }