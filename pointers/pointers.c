#include<stdio.h>

int main(){

    // pointers in c 
    // pointer is a variable that stores memory address

    int a = 45; 

    float f = 45.56; 

    // scanf("%d",&a);  // & location

    // pointer points to the location

    int* p = &a;   // p is storing the location of a
    float* p1 = &f;

    printf("\n%p is the location of %d\n",p,a);
    printf("\n%p is the location of %.2f\n",p1,f);

    // get value from location

    printf("value in pointer is %d\n",*p);
    printf("address in pointer is %p\n",p);

    // print array using pointer  //

    int arr[] = {1,2,3,4,5};
    
    int* ptr = &arr[0];

    for(int i=0;i<5;i++){
        printf("%p\ => %d\n",ptr,*ptr);
        ptr++;
    }

    // sum of two numbers using pointer and function

    int x = 23;
    int y = 24;

    printf("\nlocation of x %p\n",&x);

    sumOfNumbers(&x,&y);   // &ptr

}

void sumOfNumbers(int* ptr,int* ptr2){
    
    printf("Sum of two number is %d",*ptr+*ptr2);
    
    printf("\n\n VALUE : %p \n\n",&**&ptr);

    // &**&ptr = &x
}