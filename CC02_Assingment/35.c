// Create a structure Student containing fields for Roll No., Name, Class, Year and Total Marks.
// Create 10 students and store them in a file.
#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[20];
    int class;
    int year;
    float total;
};

int main()
{
    struct student s[10];
    float temp;
    char filename[10];
    FILE *fp;
    for(int i=0;i<10;i++)
    {
        printf("Enter Name of student %d\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter Roll of student %d\n",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter Class of student %d\n",i+1);
        scanf("%d",&s[i].class);
        printf("Enter Year of student %d\n",i+1);
        scanf("%d",&s[i].year);
        printf("Enter Total of student %d\n",i+1);
        scanf("%f",&temp);
        s[i].total=temp;
    }

    printf("Enter filename :\n");
    scanf("%s",filename);
    fp=fopen(filename,"w");

    if(fp!=NULL)
    {
        for(int i=0;i<10;i++)
        {
            fprintf(fp,"%s\t",s[i].name);
            fprintf(fp,"%d\t",s[i].roll);
            fprintf(fp,"%d\t",s[i].class);
            fprintf(fp,"%d\t",s[i].year);
            fprintf(fp,"%.2f\n",s[i].total);
        }
    }
    fclose(fp);

    return 0;
}