// narssisitic number

#include<stdio.h>

int main(){

    // 370   // 3*3*3  +  7*7*7  + 0*0*0  = 370

    // 371  == 371

    // 1234  // 1234 / 10  = 123
    // 1234  // 1234 % 10  = 4
    // 3456  // 3456 % 10  = 6


    // 1234 % 10 = 4
    // 1234 / 10 = 123

    // 123 % 10  = 3
    // 123 / 10  = 12

    int n;
    scanf("%d",&n);
    int original = n;  // 567

    int sum=0;

    while(n!=0){  // 567

        int last_digit = n%10;  // 7  // 6
        sum = sum + (last_digit*last_digit*last_digit);
        n =n/10;   // 56  // 5  // 0

    }
    // n = 0
    if(sum==original){
        printf("Number is Narsissitic Number");
    }else{
        printf("Number is not Narsissitic Number");
    }
}