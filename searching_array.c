#include<stdio.h>

int main(){
	
	
	
	int arr[] = {12,34,56,343,3,5,6,7,8,9,12};
	
	int n;
	printf("Enter Variable to find in array\n");
	scanf("%d",&n);
	
	int flag = 0;
	
	for(int i=0;i<11;i++){
		
		printf("%d ",arr[i]);
		if(n==arr[i]){
			flag = 1;
			break;
		}
	}
	
	if(flag==0){
		printf("\nNot Found");
	}else{
		printf("\nFound");
	}
}