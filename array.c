#include<stdio.h>

int main(){

    // conditional statement
    // loops

    // arrays

    // array is a group of similar type of element  // data structure
    // array is fixed size
    // 1D array

    int arr[] = {1,2,3,4,5,6,7,8,9,10};  // declare and ini.

    printf("Value at 0 index %d \n",arr[0]);
    printf("Value at 5 index %d \n",arr[5]);
    printf("Value at 9 index %d \n",arr[9]);

    arr[7] = 12;  // re initilization with new value

    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    int arr2[5];  // declare

    ///////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Enter the size of Array");
    int n;
    scanf("%d",&n);

    float arr3[n];   // arr3[5]  // arr3[0] =? / arr3[1] =? // arr3[2] =?  // arr3[3] =? // arr3[4] =?

    for(int i=0;i<n;i++){
        scanf("%f",&arr3[i]);
    }

    for(int i=0;i<n;i++){
        printf("%f ",arr3[i]);
    }
}