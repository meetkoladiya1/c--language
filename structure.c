#include<stdio.h>

struct studentData
{
    int rollNo,m,s,g,total;
    char name[50];
    float per;
};

int main()
{
    struct studentData s_data[3];

    for(int i=0; i<3; i++)
    {
          
            printf("Enter Roll Number: ");
            scanf("%d",&s_data[i].rollNo);
            printf("Enter Name: ");
            scanf("%d",&s_data[i].name);
            printf("Enter Math marks: ");
            scanf("%d",&s_data[i].m);
            printf("Enter Sci marks: ");
            scanf("%d",&s_data[i].s);
            printf("Enter Guj marks: ");
            scanf("%d",&s_data[i].g);

            s_data[i].total = s_data[i].m + s_data[i].s + s_data[i].g;
            s_data[i].per = (s_data[i].total * 100)/300;
            
       }

         printf("\n\tR.No.\tName\tM.M\tS.M\tG.M\tTotal\tPer\n");

        for(int i=0; i<3; i++)
        {
            printf("\t%d\t%s\t%d\t%d\t%d\t%d\t%f\n",s_data[i].rollNo, s_data[i].name, s_data[i].m, s_data[i].s, s_data[i].g,
                     s_data[i].total, s_data[i].per);
        }
}