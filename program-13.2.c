#include<stdio.h>
main(){
	int a,i;
	float sum=0;
	printf("Enter value of array = ");
	scanf("%d",&a);
	
	int arr[i];
	
	for(i=0;i<a;i++){
		printf("enter a[%d] - ",i);
		scanf("%d",&arr[i]);
		
		
	}
	for(i=0;i<a;i++){
		sum=sum+arr[i];
		
		
	}
	sum=sum/a;
	printf("\nAverage of an Array :- %.2f",sum);
}
