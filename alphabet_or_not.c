#include<stdio.h>

int main(){

    printf("Enter Alphabet\n");

    char ch;

    scanf("%c",&ch);

    if(ch<'z' && ch>'a'){
        printf("character is alphabet\n");    
    }else{
        printf("character is number\n");
    }

}