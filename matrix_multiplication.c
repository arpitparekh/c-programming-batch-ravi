#include<stdio.h>

int main(){

    // 2*2 2*3   // 2*3   // 1*5 5*1  // 1*1

    // 1*3  3*4

    // 2 * 3 // 3 * 2 => 2 * 2

    int arr1[1][3] = { {1 , 2 , 3} };

    int arr2[3][4] = {  {1,2,3,4}, 
                        {2,3,4,5}, 
                        {9,8,7,6} };
    int arr3[1][4];                        

    for(int i=0;i<1;i++){  // 0 

        for(int j=0;j<4;j++){  // 0  // 1 // 2  // 3

            int sum = 0;

           for(int k=0;k<3;k++){  // 0 1 2   //  0 1 2  // 0 1 2  // 0 1 2 

                sum = sum + arr1[i][k] * arr2[k][j];

                // sum =  [00] * [00]
                // sum = sum + [01] * [10]
                // sum = sum + [02] * [20]

                // sum = [00] * [01]
                // sum = sum + [01] * [11]
                // sum = sum + [02] * [21]

                // sum = [00] * [02]
                // sum = sum + [01] * [12]
                // sum = sum + [02] * [22]

                // sum = [00] * [03]
                // sum = sum + [01] * [13]
                // sum = sum + [02] * [33]
           }

           arr3[i][j] = sum; // [00] // [01] // [02]  // [03]

        }

    }

    for(int i=0;i<1;i++){  // 0 

        for(int j=0;j<4;j++){  // 0  // 1 // 2  // 3

            printf("%d ",arr3[i][j]);

        }

    }

    

}