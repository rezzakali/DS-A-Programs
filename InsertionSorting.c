#include<stdio.h>
#define MAX 50
main(){
	int i,j,temp,n,arr[MAX];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter the elements %d:",i+1);
		scanf("%d",&arr[i]);
	}
//	insertion sort
	for(i=1; i<n; i++){
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("Sorted list is:\n");
		for(i=0; i<n; i++)
			printf("%d\t",arr[i]);
	printf("\n");
}
