#include<stdio.h>

int main(){

    // primeNumber(13);  // 33
    //  primeNumber(14);  // 33
    //   primeNumber(15);  // 33
    //    primeNumber(16);  // 33
    //     primeNumber(17);  // 33

    evenodd(18);

    greater(19,26);
    greater(35,22);
    greater(115,2);

    int arr[] = {1,2,3,4,5,6,7,8,9,8};
    getSum(arr);

    int multi[]={2,5,8,6,4};
    yourmulti(multi);
}
// 
void primeNumber(int n){

    // n = 33

     // 23  // 2 22

    int dummy = 0;

    // 37

    for(int i=2;i<n;i++){ // 2

        // printf("[%d] -> [%d]\n",i,number);
        if(n%i==0){
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
void evenodd(int a){  

    // int a = 13;

    if(a%2==0){
        printf("Even number");
    }else{
        printf("Odd number");
    }
}
void greater(int a,int b){

    if(a<b){
        printf("\n%d is grrater",b);
    }else{
        printf("\n%d is greater",a);
    }
}
void getSum(int arr[10]){
    int sum=0;
    for(int i=0;i<10;i++){
        sum = sum + arr[i];
    }
    printf("\nSum is %d \n",sum);
}
void yourmulti(int arr1[5]){
    int multi=1;
    for(int i=0;i<5;i++){
        multi= multi*arr1[i];
    }
    printf("\nmultipliication is %d",multi);
}