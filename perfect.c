#include<stdio.h>

int perfect(int num)
{
	int i,n,sum=0;
	n=num;
	for(i=1;i<n;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	if(num==sum)
		printf("%d is perfect number",num);
	else
		printf("%d is not perfect number",num);
}
int main()
{
	int num;
	printf("enter any number :");
	scanf("%d",&num);
	perfect(num);
}