#include<stdio.h>

int main(){

    // pre-defined functions  // library functions

    // printf()
    // scanf()
    // pow()

    // 4 types of function

    // return_type name_of_function(paramters){  function body  }

    // function is a block of code that runs when we call it

    maroSum();
    maroSum();
    maroSum();   // code reusability

    sum(12,13);
    sum(11,15);
    sum(10,20);


    int c = myFunction();
    printf("%d",c);
    // printf("%d",myFunction());

    printf("\n%d\n",multi(12,12));

    // printf("%d",multi(12,13));

    sub(50,23);

}

void maroSum(){  // function defination

    printf("\nThis is From function\n");
    printf("This is From function\n");
    printf("This is From function\n");

}


void sum(int a,int b){       // no return type  // but with parameter
    printf("\n%d\n",a+b);
}

int myFunction(){  // no parameter  // but with return

    printf("This is from  MyFunction");

    return 20;
}

int multi(int a,int b){
    return a*b;
}


void sub(int a, int b){
    printf("%d",a-b);
}
