#include<stdio.h>

int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

int main()
{
	int c;
	c=sum(5,7);
	printf("sum is:%d\n",c);

	c=sum(10,15);
	printf("sum is:%d\n",c);

	c=sum(18,20);
	printf("sum is:%d\n",c);
}