#include<stdio.h>
int main()
{
	int a=1,b=1;
	for(int a=0;a<5;a++)
	{
		b=1;
		for(int b=0;b<5;b++)
		{
		printf("%d ",a);
		b++;
			printf("*");
			printf("$");
		}
	printf("\n");
	a++;
	}
	return 0;
}