#include<stdio.h>

main()
{
	int n1,n2;
	printf("enter two numbers:"); 
	scanf("%d %d", &n1,&n2);
	
	printf("sum:%d sub:%d mul:%d div:%d",n1+n2,n1-n2,n1*n2,n1/n2);
}
