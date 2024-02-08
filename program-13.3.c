#include<stdio.h>

main()
{
	
	int a,i;
	
	printf("Enter the number :-");
	scanf("%d",&a);
	
	int arrA[a],arrB[a],sum[a];
	
	
	printf("Enter array A's elements:\n");
	for(i = 0; i < a;i++){
		printf("a[%d] = ", i);
        scanf("%d", &arrA[i]);
            
	}	
	printf("\nEnter array B's elements:\n");
	for(i = 0; i < a;i++){
		printf("a[%d] = ", i);
        scanf("%d", &arrB[i]);      
	}
	
	printf("\nArr C is: ");
	for(i = 0; i < a;i++){
		sum[i]=arrA[i]+arrB[i];
		printf("%d, ", sum[i]);  
	}

}
