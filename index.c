// Q.1
// #include <stdio.h>
// int main()
// {
//     int a[500],i,n;
   
//     printf("Enter size of the array shivang : ");
//     scanf("%d", &n);
 
//     printf("Enter elements in array : ");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
 
//     printf("\nAll negative elements in array are : ");
//     for(i=0; i<n; i++)
//     {
         
//         if(a[i] < 0)
//         {
//             printf("%d", a[i]);
//         }
//     }
 
//     return 0;
// }

// Q.2

// #include<stdio.h>

// int main(){
//     int rows=3;
//     int cols=3;
//     int arr[rows][cols];

//     int transposeMatrix[cols][rows];

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             printf("Enter the array's row & column size %d :",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//            transposeMatrix[i][j]=arr[j][i];
//         }
//     }
    
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//            printf("%d ",transposeMatrix[i][j]);
//         }
//         printf(("\n"));
//     }

//     return 0;
// }