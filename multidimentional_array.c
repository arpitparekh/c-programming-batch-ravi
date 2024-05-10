#include<stdio.h>

int main(){
    
    int arr[] = {1,2,3,5,7,8,8,5};

    int arr2[4][3] = { {1,2,3},{4,5,6} ,{7,8,9} ,{10,11,12} };
    //               0           1         2           3

    printf("\n%d\n",arr2[3][0]);

    for(int i=0;i<4;i++){   // 0  // 1

        for(int j=0;j<3;j++){  // 0  1  2   //  0  1  2

            printf("%d ",arr2[i][j]);

        }

        printf("\n");

    }


    int arr3[2][2][2] = {  {  {1,2} , {3,4}  } , { {5,6}  , {7,8}  }  };

    for(int i=0;i<2;i++){  // 0  //1

        for(int j=0;j<2;j++){  // 0  // 1

            for(int k=0;k<2;k++){   // 0 , 1   // 0 , 1

                printf("%d ",arr3[i][j][k]);

            }

        }

    }

}