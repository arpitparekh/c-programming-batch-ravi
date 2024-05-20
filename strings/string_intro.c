#include<stdio.h>
#include<string.h>

int main(){


    // 1212  12.324 // float
    // 'c' 
    // int arr[] = {1,2,3,4,5};

    // "hello"

    // string is an array of character
    // maulik

    char name[] = "Maulik453";

    char name2[] = {'m','a','u','l','i','k'};


    printf("\n%s\n",name);

    printf("Length is the string %s is %d\n",name,strlen(name));

    int a = 12;
    long int b = 34324234324;

    printf("size of integer %d\n",sizeof(a));
    printf("size of integer %d\n",sizeof(b));

    int arr[]={1,2,3,4,5};

    printf("size of integer array is  %d\n",sizeof(arr));
    printf("size of integer is  %d\n",sizeof(int));

    printf("Total elements in array is %d\n",sizeof(arr)/sizeof(int));

    char firstName[] = "Parekh ";
    char lastName[] = "Arpit";

    printf("Concated String is %s\n",strcat(firstName,lastName));

    char str1[]="Original String";

    char str2[strlen(str1)];

    strcpy(str2,str1);  // copy string function

    printf("%s is str2 string\n",str2);

    //////////////////////////////////////////////////////////

    char address[100];        // take input from users in string

    // scanf("%s",&address);
    gets(address);

    // printf("\n%s\n",address);
    puts(address);

    //////////////////////////////////////////////////////////////

    // strlen() strcpy() strcat() strcmp()  // string.h

    ////////////////////////////////////////////////////////////

    char s1[] = "hello";
    char s2[] = "hi";

    // == 

    printf("\nComparision is %d",strcmp(s1,s2));  // 0 = eqial and -4 means different


    for(int i=0;i<strlen(s1);i++){
        printf("%c",s1[i]);
    }

    

}