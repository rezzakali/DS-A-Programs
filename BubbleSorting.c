#include<stdio.h>
#define MAX 50
main(){
	int i,j,temp,arr[MAX],xchange,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		
		printf("Enter the elements:",i+1);
		scanf("%d",&arr[i]);
	}
//	bubble sort
	for(i=0;i<n-1;i++){
		xchange=0;
		for(j=0; j<n-1-i ;j++){
			
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				xchange++;
			}
		}
		if(xchange==0)
			break;
		
	}
	printf("Sorted list is:\n");
			for(i=0; i<n; i++)
				printf("%d\t",arr[i]);
		printf("\n");
}
