#include<stdio.h>
#include<string.h>
int main()
{
    char str;
    int i;
    for (int i = 0; i < 5; i++)
    {
       printf("Enter str char :");
        scanf("%s",&str[i]);
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("str char: %c\n",str[i]);
    }
    printf("\nstr string is: %s",str);

    return 0;

}