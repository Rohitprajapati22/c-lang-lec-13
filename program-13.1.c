#include<stdio.h>

main()
{
	
	int a,i,sum=0,sub,m,d;
	
	printf("Enter the number :- ");
	scanf("%d",&a);
	
	int arr[i];
	
	for(i=0;i<a;i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<a;i++){
		printf("%d  ",arr[i]);
		sum =sum+arr[i];
	
	}
	
	sub=arr[0];

	for(i=1; i<a; i++){
	sub= sub - arr[i];
	}
	
	m=arr[0];

	for(i=1; i<a; i++){
	m= m * arr[i];
	}
	
	d=arr[0];

	for(i=1; i<a; i++){
	d = d / arr[i];
	}
	
	printf("\n\nLength of an Array: %d\n", a);
	printf("sum of all Array: %d\n", sum);
	printf("sub of all Array: %d\n", sub);
	printf("maltiply of all Array: %d\n", m);
	printf("division of all Array: %d\n", d);
	
}
