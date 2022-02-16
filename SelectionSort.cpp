//programming using selection sort
#include<stdio.h>
#define MAX 50
main(){
	int i,j,temp,n,min,arr[MAX];
	printf("Enter the number of element:");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Enter the elements:",i+1);
		scanf("%d",&arr[i]);
	}
	
//	selection sort start from here
	for(i=0;i<n-1;i++){
//		find the smallest element index
		min=i;
		for(j=i+1; j<n; j++){
			if(arr[min]>arr[i])
				min=j;
		}
		if(i!=min){
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	printf("Sorted list is : \n");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	
	printf("\n");
}
