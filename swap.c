#include<stdio.h>

main()
{
	
	int m=10,n=50;
	int *m1,*n1,*A;
	
	
	m1=&m;
	n1=&n;
	
	
	
	A = m1;
	m1 = n1;
	n1 = A;
	
	printf("m = %d",*m1);
	printf("\nn = %d",*n1);
}






