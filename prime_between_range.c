#include<stdio.h>
int main(){

    int n1,n2;

    scanf("%d%d",&n1,&n2);   // 10  // 50

    for(int i=n1;i<=n2;i++){

        // i = 10 // 11

        // 2..9  // 2..10

        int val = 20;

        for(int j=2;j<i;j++){  // 2..9
            
            if(i%j==0){
                val = 30;
                break;
            }
        }
        if(val==20){
            printf("%d ",i);
        }
    }

    int n=0;

    for(){
        n++;
    }

}