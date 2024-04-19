// number is prime or not

#include<stdio.h>

int main(){

    // 57

    // 97

    int number;

    printf("enter one number\n");

    scanf("%d",&number);

    int dummy = 0;

    // 37

    for(int i=2;i<number;i++){ // 2

        // printf("[%d] -> [%d]\n",i,number);
        if(number%i==0){
            dummy=2;
            break;
        }
        // printf("%d\n",number%i);
        
    }

    if(dummy==0){
        printf("prime che\n");
    }else{
        printf("not prime\n");
    }


}