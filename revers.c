#include<stdio.h>

main()

{
	int *p,*p1;
	int i,m,n;
	printf("Enter size arrays:");
	scanf("%d",&n);
	int a[n];
	printf("enter the Elements of array=");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
     }
	  p=&a[0];
	  p1=&(a[n-1]);
	  
	  while(p<p1)
	  {
	  	m = *p;
	  	*p = *p1;
	  	*p1 =m;
	  	p=p+1;
	  	p1=p1-1;
	  	
	  }
	  printf("Elements of array in reverse \n");
	  for(i=0;i<n;i++)
	  printf("%d\n",a[i]);
	
	
}
