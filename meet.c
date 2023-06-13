#include<stdio.h>

main()

{
	int a[100];
	int *p[100];
	int n,i;
	printf("Enter value of array=");
	scanf("%d",&n);
	
	printf("enter element printf in array=");
   	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
		
		printf("value of array=%d\n",*p[i]);
		
	}
}


