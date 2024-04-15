// give me nested loop example

#include<stdio.h>

int main(){   // remove left horizontal numbers
    
    for(int i=1;i<=5;i++){ // 1

        
        for(int j=1;j<=5;j++){ // 1 1 1 1 1 // 2 2 2 2 2

            if(i==j){
                printf("  ");
            }else{
                 printf("%d ",j);
            }
        }

        printf("\n");

    }
}

