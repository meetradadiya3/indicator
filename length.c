#include<stdio.h>

main()

{
	char ch[100];
	char *p;
	
	int i,n;
	printf("Enter string =");
	gets(ch);
	p = &ch;
	printf("string length =%d",strlen(p));
}
	
