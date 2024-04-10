#include<stdio.h>

int main(){

    // Aritmetic ooperator
    // + - / * % 
    
    // increment // decrement
    // ++  --

    int a = 12;
    int b = 13;

    // type conversion

    // float c = (float)a/(float)b;

    // 12%13 = 12
    // 101 % 5 = 1
    // 12%10 // give me last digit
    // 12/10 // removes last digit in int

    int c = a/10; 

    printf("\nValue of c is %d\n",c);

    // ++ increment operator
    // -- decrement operaror

    int x = 45;
    int y = 56;

    int z = x--;


    printf("\nValue of z is %d\n",z); // 

    printf("\nValue of x is %d\n",x);


    // conditional operator

    // < > <= >= == !=

    int k = 30;
    int j = 30;

    printf("\nCondition Example : %d\n",k!=j);

    // logical operator

    // && ||


    int m = 45;
    int n = 77;

    int o = (m<n) || (m==n);

    printf("\nValues of o is %d\n",o);

    /*

    AND  &&

    1  1  1
    1  0  0
    0  1  0
    0  0  0

    OR   ||

    1  1  1
    1  0  1
    0  1  1
    0  0  0

    */


    // Assignment Opeator

    // =
    int g = 45;  // i assigned the value 45 to the variable g

    // +=  -=  /=  *=  %=   <<=  >>=


    int h = 66;

    h = 67;   // reassigning the value

    h = 100;

    // h = h+1;
    
    h %= 20 ;

    printf("\nValue of h is %d\n",h);

    // bitwise operator

    int e = 10;   // 10.10
    int r = 20;   // 10100

    int t = e>>2;

    printf("\nvalue of t %d\n",t);


    // ^  XOR

    /*
    
    0   0   0
    0   20   20
    1   0   1
    1   1   0
    */

    int q = 30;

    printf("\nXOR Example : %d\n",q^0);

    
}