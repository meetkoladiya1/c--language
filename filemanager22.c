#include<stdio.h>
int main()
{
    FILE * fp;
    char buff[250];

    fp=fopen("meet.txt","r");
    while (fscanf(fp,"%s",buff)!=EOF)
    {
        printf("%s",buff);
    }
    fclose(fp);
    
}