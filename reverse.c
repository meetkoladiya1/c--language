#include<stdio.h>
int main()
{
	char a[30];
	int i,j;

	printf("enter name:");
	scanf("%s",&a);

	for(i=0;a[i]!='\0';i++){}
	for(j=i;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	return 0;
}