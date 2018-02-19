#include<stdio.h>
int* add_one(int *arr,int* n){
	int i,sum=0;
	for(i=0;i<*n;i++){
		sum=sum+arr[i];
	}
	if(sum != 0 && sum%9 == 0  ){
		*n=*n+1;
		int *arr=(int *)malloc((*n)*sizeof(int));
		arr[0]=1;
		int j;
		for(j=1;j<*n;j++){
			arr[j]=0;
		}
		return arr;
	}else{
		int carry;
		for(i=*n-1;i>=0;i--){
	     	if((arr[i]+1)%10 == 0){
			arr[i]=0;
	    	}else{
			arr[i]=arr[i]+1;
			return arr;
		 }   
		
	  } 
	  
	}
}
int main(){
	printf("Enter the size of the array\n");
	int n;
	int i;
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements into the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int *b=add_one(arr,&n);
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
 return 0;	
}

