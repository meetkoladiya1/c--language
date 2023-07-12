#include<stdio.h>
int main()
{
    FILE fp;
    fp=fopen("meet.txt","w+");

    fprintf(fp,"welcome to skill qode -decode your skill here....\n");

    fputs("you are entering to learning c language now...\n");

    fputs("today is friday and c language complete...\n",fp);

    fclose(fp);
}