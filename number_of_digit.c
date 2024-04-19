#include<stdio.h>

int main(){

    printf("Enter Number\n");
    int n;
    scanf("%d",&n);  // 1234

    int value=0;

    while(n!=0){  // 1234  // 123 // 12 // 1 // 0
        n=n/10;
        value++;
    }

    printf("\n number of digit is : > %d\n",value);


    // 


}