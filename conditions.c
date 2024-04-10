#include<stdio.h>

int main(){


    // conditions
    // if else  // if else ladder // nested if // nested else
    // switch

    // int a = 33;

    // if(a<30){
    //     printf("\nYes number is less than 30\n\n");
    // }else{
    //     printf("\nYes number is greater than 30\n\n");
    // }

    // take two njmber from user and check if one is less then another or not
    // scanf only takes formate specifiers

    // printf("\n pLease enter a value\n");
    // int c,h;
    // scanf("%d%d",&c,&h);
    
    // if(c>h){
    //     printf("\n Your value %d is greater than %d\n",c,h);
    // }else{
    //     printf("\n Your Value %d less then %d\n",c,h);
    // }

    // int f = 50;

    // if(f==20 || f==30){   // also use logical operators
    //     printf("\nYour number is 20 or 30\n\n");
    // }else{
    //     printf("\nYour number is not 20 or 30\n\n");
    // }

    // if(f==20){
    //     printf("\nYour number is 20\n\n");
    // }else if(f==30){
    //     printf("\nYour number is 30\n\n");

    // }else if(f==40){
    //     printf("\nYour number is 40\n\n");

    // }else{
    //     printf("\nYour number is not found\n\n");
    // }


    // find even or odd from given number

    // printf("\nEnter Number : ");
    // int c;
    // scanf("%d",&c);

    // if(c%2==0){  // logic
    //     printf("\nnumber is even\n");
    // }else{
    //     printf("\nnumber is odd\n");

        
    // }

    // take two number from user and check if sum of those number is less then 50 // task

    // printf("\n Enter your number :");
    // int m,n;
    // scanf("%d%d",&m,&n);
    // int j=m+n;

    // if(j<50){
    //     printf("\n ypur number is lessthan 50");
    // }else if(j>50){
    //     printf("\n ypur number is greaterthan 50");
    // }else if(j==50){
    //     printf("\n ypur number is 50");
    // }

    // if else ladder

    // nested if

    // int l = 30;

    // if(l<40){            // nested if

    //     if(l<25){
            
    //         if(l>9){
                
    //             printf("Inner inner if\n\n");

    //         }else{
    //             printf("Inner inner else\n\n");
    //         }

    //     }else{
    //           printf("Inner  else\n\n");  
    //     }

    // }else{
    //         printf("else\n\n");
    // }


    // nested else

    // int o = 88;

    // if(o<34){

    //     printf("Outer if\n");

    // }else if(0==34){
    //     printf("outer else if\n");
    // }
    // else{

    //     if(o<45){
    //         printf("inner if\n");

    //     }else{

    //         if(o<98){

    //             printf("inner inner if\n");

    //         }else{
    //             printf("inner inner if\n");
    //         }
    //     }
    // }

    // switch case

    /*int g = 56;

    switch(g){

        case 10:
            printf("value is 10\n");
            break;
        case 20:
            printf("value is 20\n");
            break;
        case 40:
            printf("value is 40\n");
            break;
        case 56:
            printf("value is 56\n");
            break;
        default:
            printf("value not found\n");

    }*/


    // using a switch case take two input from user and find sum and check of the sum is divisable by 3 or divisable by 5 or not with both of them

    // nested switch

    int c,q;
    printf("\nplease enter two values\n");
    scanf("%d%d",&c,&q);
    int o=c+q;  // 45

    switch(o%15){

        case 0:
         printf("your value is dividable with and 5 and 3\n");
            break;
        default:
            switch(o%3){
                case 0:
                    printf("your value is divisable by 3\n");
                    break;
                default:
                    switch(o%5){
                        case 0:
                            printf("your value is divisable by 5\n");
                            break;
                        default:
                            printf("your value is not  divisable by 3 or 5\n");

                    }
            }
    }
}
    
    



