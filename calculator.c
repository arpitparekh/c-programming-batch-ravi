#include<stdio.h>

int main(){

    printf("\nPlease Choose One Operation\n1-> Sum\n2-> Sub\n3-> Mul\n4-> Div\n5-> mod\nEnter Your Selection : ");
    int n;
    scanf("%d",&n);

    printf("\nNow enter Two Values of your choice\n");
    int a,b;
    scanf("%d%d",&a,&b);

    if(n==1){

        printf("Ans is [%d+%d]=%d\n",a,b,a+b);

    }else if(n==2){
        printf("Ans is [%d-%d]=%d\n",a,b,a-b);

    }else if(n==3){
        printf("Ans is [%d*%d]=%d\n",a,b,a*b);

    }else if(n==4){
        printf("Ans is [%d/%d]=%d\n",a,b,a/b);

    }else if(n==5){
        printf("Ans is [%d %% %d]=%d\n",a,b,a%b);

    }else{
        printf("Please enter value betwwen 1 to 5\n");
    }
    

}