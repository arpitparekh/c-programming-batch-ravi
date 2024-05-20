#include<stdio.h>

int main(){

    printf("enter 2 sides of triangle\n");
    int a,b;
    scanf("%d%d",&a,&b);

    printf("Enter the base of triangle");
    int base;
    scanf("%d",&base);

    printf("Enter the hright of triangle");
    int h;
    scanf("%d",&h);

    float area = ((float)base*(float)h)/2;  // logic
    int paremeter = a+b+base;

    printf("\nArea of triangle is %f",area);
    printf("\nperimeter of triangle is %d\n",paremeter);

}