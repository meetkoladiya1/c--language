#include <stdio.h> 
int a()
{
	int a,i;
	int b[]={25,10,5,2,1};

	printf("enter amount");
	scanf("%d",&a);

	for(i=0;b[i]!='\0';i++)
	{
		printf("\n%d - %d",b[i],a/b[i]);
		a=a%b[i];
	}
	return a;
}  

int main()
{
	a();
}

