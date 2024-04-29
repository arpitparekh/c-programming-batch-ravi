#include<stdio.h>

int main(){
	
	
	int arr[] = {23,44,1,8,5,34,54,99,0,2};
	
	// sort the array
	
	printf("\Before Sorting\n");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<10;i++){  // i  // 0
		
		  // 23 44 1 8 5 34
		
		  // arr[0]  = 23
		  
		  for(int j=i+1;j<10;j++){  // 1..9
		  
		  	int temp = arr[i];
		  	
		  	if(arr[i]>arr[j]){
		  		arr[i]=arr[j];
		  		arr[j]=temp;
			  }
		  	
		  }
		  
	}
	
	printf("\nAfter Sorting\n");
	for(int i=0;i<10;i++){
		
		printf("%d ",arr[i]);
	}
	
}